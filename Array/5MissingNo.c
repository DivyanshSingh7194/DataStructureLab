#include<stdio.h>
void main()
{
  int n,i,l,flag=0;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the difference between elements\n");
  scanf("%d",&l);
  for(i=0;i<n-1;i++)
    {
      if((a[i+1]-a[i])!=l)
      {
        printf("Missing element is %d",(i+2)*l);flag=1;break;
      }
    }
  if(flag==0)
    printf("Series is not missing a number");
}
