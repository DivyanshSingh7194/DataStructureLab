#include<stdio.h>
void Linear(int n,int a[n],int key)
{
  printf("Linear\n");
  int i;
  for(i=0;i<n;i++)
    {
      if(a[i]==key)
      {
        printf("%d found at %d\n",key,i);
        break;
      }
      else if(i==n-1&&a[i]!=key)
      {
        printf("%d was not found\n",key);
      }
    }
}
void Binary(int n,int a[n],int key,int l,int h)
{
  printf("Binary\n");
  int mid;
  while(l<=h)
    {
      mid=(l+h)/2;
      if(a[mid]==key)
      {
        printf("%d found at %d\n",key,mid);
        break;
      }
      else
      {
        if(a[mid]!=key)
        {
          printf("%d was not found\n",key);
          break;
        }
        if(key<a[mid])
          h=mid-1;
        else
          l=mid+1;
      }
    }
}
void main()
{
  int i,n,x;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n],low=0,high=n;
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the element you want to search\n");
  scanf("%d",&x);
  Linear(n,a,x);
  Binary(n,a,x,low,high);
}
