#include <stdio.h>
struct Time
{
  int hour;
  int min;
  int sec;
};
void Addtime(struct Time ti[2])
{
  int sum=0,sec,min,i;
  for(i=0;i<2;i++)
    {
      sum=sum+ti[i].sec;
      if(sum>=60)
      {
        sum=sum%60;
        ti[i].min=ti[i].min+1;
      }
    }
  sec=sum;
  sum=0;
  for(i=0;i<2;i++)
    {
      sum=sum+ti[i].min;
      if(sum>=60)
      {
        sum=sum%60;
        ti[i].hour=ti[i].hour+1;
      }
    }
  min=sum;
  sum=0;
  for(i=0;i<2;i++)
    {
      sum=sum+ti[i].hour;
    }
  printf("Time is %d hours %d minutes %d seconds",sum,min,sec);
}
void main()
{
  struct Time ti[2];
  int i;
  for(i=0;i<2;i++)
    {
      printf("Enter the time in hrs,min,sec\n");
      scanf("%d %d %d",&ti[i].hour,&ti[i].min,&ti[i].sec);
    }
  Addtime(ti);
}
