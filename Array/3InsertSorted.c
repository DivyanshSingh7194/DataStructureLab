#include<stdio.h>
void main()
{
  int i,m,n,x,pos,flag;
  printf("Enter the number of elements\n");
  scanf("%d",&m);
  n=m+1;
  int a[m],b[n];
  printf("Enter elements in array\n");
  for(i=0;i<m;i++)
    {
      scanf("%d",&a[i]);
      b[i]=a[i];
    }
  printf("Enter the element you want to insert\n");
  scanf("%d",&x);
  for(i=0;i<n;i++)
    {
      if(a[i]>x)
      {
        flag=i;break;
      }
    }
  for(i=n-1;i>=flag;i--)
    {
      b[i]=b[i-1];
    }
  b[flag]=x;
  printf("Array after insertion\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",b[i]);
    }
}
