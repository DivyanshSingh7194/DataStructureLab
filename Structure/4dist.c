#include<stdio.h>
struct Dist
  {
    int feet;
    int inch;
  };
void Addft(struct Dist di[2])
{
  int i,sum=0;
  for(i=0;i<2;i++)
    {
      sum=sum+di[i].feet;
    }
  printf("Feet %d",sum);
}
void Addin(struct Dist di[2])
{
  int i,sum=0;
  for(i=0;i<2;i++)
    {
      sum=sum+di[i].inch;
      if(sum>=12)
      {
        sum=sum-12;
        di[i].feet=di[i].feet+1;
      }
    }
  printf("Inch %d\n",sum);
}
void main()
{
  struct Dist di[2];
  int i;
  for(i=0;i<2;i++)
    {
      printf("Enter the distance in feet and inch\n");
      scanf("%d %d",&di[i].feet,&di[i].inch);
    }
  Addin(di);
  Addft(di);
}
