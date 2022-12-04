#include<stdio.h>
void main()
{
  int n,i;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n],b[n+1];
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
    {
      b[i]=0;
    }
  for(i=0;i<n;i++)
    {
      b[a[i]-1]=1;
    }
  for(i=0;i<n;i++)
    {
      if(b[i]==0)
      {
        printf("%d is the missing element\n",i+1);break;
      }
    }
}
