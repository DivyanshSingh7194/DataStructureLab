#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *p,i;
  p=(int *)malloc(40);
  for(i=0;i<5;i++)
    {
      scanf("%d",p+i);
    }
  for(i=0;i<5;i++)
    {
      printf("%d",*p+i);
    }
  printf("\n%u %u %u %u",sizeof(int),sizeof(double),sizeof(long),sizeof(long long));
}
