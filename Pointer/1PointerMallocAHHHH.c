#include<stdio.h>
#include<stdlib.h>
void main()
{
  int N,i;
  printf("Enter size value\n");
  scanf("%d",&N);
  int *p;
  p=(int *)malloc(N*sizeof(int));
  for(i=0;i<N;i++)
    {
    scanf("%d",p+i);
    }
  for(i=0;i<N;i++)
    {
      printf("%d ",*p+i);
    }
}
