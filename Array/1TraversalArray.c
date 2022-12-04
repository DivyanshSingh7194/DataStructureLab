#include<stdio.h>
void main()
{
  int i,m;
  printf("Enter number of elements\n");
  scanf("%d",&m);
  int a[m];
  printf("Enter array elements\n");
  for(i=0;i<m;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Array elements are\n");
  for(i=0;i<m;i++)
    {
      printf("%d\t",a[i]);
    }
}
