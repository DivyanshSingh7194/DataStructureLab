#include<stdio.h>
void main()
{
  int i;
  char *q;
  q=(char *)malloc(10);
  for(i=0;i<5;i++)
    {
      scanf("%c",q+i);
    }
  for(i=0;i<5;i++)
    {
      printf("%c",*q+i);
    }
}
