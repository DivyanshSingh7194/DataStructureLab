#include<stdio.h>
void main()
{
  int i,m,n,x=0,flag=-1;
  printf("Enter the number of elements\n");
  scanf("%d",&m);
  n=m-1;
  int a[m],b[n];
  printf("Enter the elements\n");
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element you want to remove\n");
  scanf("%d",&x);
  for(i=0;i<m;i++)
    {
      if(a[i]==x)
      {
        flag=i;break;
      }
    }
  if(flag==-1)
    printf("Element was never entered\n");
  else
  {
    for(i=0;i<flag;i++)
      {
        b[i]=a[i];
      }
    for(i=flag+1;i<m;i++)
      {
        b[i-1]=a[i];
      }
  }
  printf("Array after deletion\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",b[i]);
    }
}
