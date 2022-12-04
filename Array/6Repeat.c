#include<stdio.h>
void main()
{
  int n,i,j;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n],b[n];
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]>n)
      {
        printf("Value of element should be less than number of elements because i applied DAT");
        exit(0);
      }
    }
  for(i=0;i<n;i++)
    {
      b[i]=0;
    }
  for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
        {
          if(a[i]==a[j])
            b[a[i]]++;
        }
    }
  for(i=0;i<n;i++)
    {
      if(b[i]>=1)
        printf("%d is repeated %d times",i,b[i]);
      else if(b[i]==0)
        printf("%d was not repeated",i);
      printf("\n");
    }
}
