#include<stdio.h>
void main()
{
  int n,i,k,l,key,flag=0;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the jumping index value\n");
  scanf("%d",&l);
  printf("Enter the element you want to search\n");
  scanf("%d",&key);
  for(i=0;i<n;i=i+l)
    {
      if(a[i]>key)
      {
        k=i-l;break;
      }
    }
  for(i=k;i<k+l;i++)
    {
      if(a[i]==key)
      {
        printf("%d found at %d",key,i);flag=1;
      }
    }
  if(flag==0)
    printf("Element not found");
}
