#include <stdio.h>
void main()
{
  int m,i,j;
  printf("Enter number of elements\n");
  scanf("%d",&m);
  int a[m],b[m];
  printf("Enter the elements\n");
  for(i=0;i<m;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Elements are\n");
  for(i=0;i<m;i++)
    {
      printf("%d\t",a[i]);
    }
  printf("\n");
  for(i=0,j=m-1;i<m,j>=0;i++,j--)
    {
      b[i]=a[j];
    }
  printf("Reverse Array\n");
  for(i=0;i<m;i++)
    {
      printf("%d\t",b[i]);
    }
}
