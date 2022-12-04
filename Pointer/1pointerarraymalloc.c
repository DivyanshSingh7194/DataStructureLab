#include <stdio.h>
#include<stdlib.h>
void main()
{
  int i,N,*p;
  printf("Enter no. of elements\n");
  scanf("%d",&N);
  p=(int*)malloc(N*sizeof(int));
  for(i=0;i<N;i++)
    {
      scanf("%d",&p[i]);
    }
  for(i=0;i<N;i++)
    {
      printf("%d",p[i]);
    }
}
