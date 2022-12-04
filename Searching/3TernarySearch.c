#include<stdio.h>
void main()
{
  int n,mid1,mid2,low,high,x,i,flag=0;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n];low=0,high=n-1;
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the number you want to find\n");
  scanf("%d",&x);
  while(low<=high)
    {
      mid1=low+((high-low)/3);
      mid2=high-((high-low)/3);
      if(a[mid1]==x)
      {
        printf("%d found at %d",x,mid1);
        flag=1;
        break;
      }
      if(a[mid2]==x)
      {
        printf("%d found at %d",x,mid2);
        flag=1;
        break;
      }
      if(x<a[mid1])
      {
        high=mid1-1;
      }
      else if(x>a[mid2])
      {
        low=mid2+1;
      }
      else
      {
        low=mid1+1;high=mid2-1;
      }
    }
  if(flag==0)
  {
    printf("Element not found");
  }
}
