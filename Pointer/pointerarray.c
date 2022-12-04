#include<stdio.h>
void main()
{
  int a[10];
  int *ptr,i;
  ptr=&a[0];
  printf("Elements\n");
  for(i=0;i<10;i++)
    {
      scanf("%d",ptr+i);
    }
  for(i=0;i<10;i++)
    {
      printf("%d ",*ptr+i);
    }
}
