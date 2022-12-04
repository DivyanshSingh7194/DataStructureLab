#include <stdio.h>
struct Complex
{
  int real;
  int imagi;
};
void AddImg(struct Complex comp[2])
{
  int sum=0,i;
  for(i=0;i<2;i++)
    {
      sum=sum+comp[i].imagi;
    }
  printf("Sum of Imaginary Part %di",sum);
}
void Addreal(struct Complex comp[2])
{
  int sum=0,i;
  for(i=0;i<2;i++)
    {
      sum=sum+comp[i].real;
    }
  printf("Sum of Real Part %d\n",sum);
}
void main()
{
  struct Complex comp[2];
  int i;
  for(i=0;i<2;i++)
    {
      printf("Enter the real and imaginary parts\n");
      scanf("%d %d",&comp[i].real,&comp[i].imagi);
    }
  Addreal(comp);
  AddImg(comp);
}
