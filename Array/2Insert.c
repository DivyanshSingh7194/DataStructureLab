#include<stdio.h>
void main()
{
  int i,m,x=0,pos=0;
  printf("Enter the number of elements\n");
  scanf("%d",&m);
  int n=m+1;
  int a[m],b[n];
  printf("Enter array elements\n");
  for(i=0;i<m;i++)
    {
      scanf("%d",&a[i]);
      b[i]=a[i];
    }
  printf("Enter the element you want to enter and its position\n");
  scanf("%d%d",&x,&pos);
  for(i=n-1;i>pos;i--)
    {
      b[i]=b[i-1];
    }
  b[pos]=x;
  printf("Array after insertion\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",b[i]);
    }
}
