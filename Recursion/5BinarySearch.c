#include<stdio.h>
void Bin(int a[],int lo,int hi,int mid,int x)
{
  if(lo<=hi)
  {
    mid=(hi+lo)/2;
    if(x==a[mid])
    {
      printf("%d found at %d",x,mid);
      exit(0);
    }
    else if(x<a[mid])
      Bin(a,lo,mid-1,mid,x);
    else if(x>a[mid])
      Bin(a,mid+1,hi,mid,x);
  }
  else
  {
    printf("Element not found");
    exit(0);
  }
}
void main()
{
  int i,n,lo,hi,mid,key;
  printf("Enter the no. of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  lo=0,hi=n-1;
  printf("Enter element you want to search\n");
  scanf("%d",&key);
  Bin(a,lo,hi,mid,key);
}
