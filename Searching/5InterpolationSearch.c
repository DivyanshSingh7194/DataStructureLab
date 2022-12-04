#include<stdio.h>
void main()
{
  int n,i,lo,hi,key,flag=0,pos;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the element you want to search\n");
  scanf("%d",&key);
  lo=0,hi=n-1;
  while(lo<=hi)
    {
      if(key >= a[lo] && key <= a[hi])
      pos=lo + (((key - a[lo]))*((hi - lo)/(a[hi] - a[lo])));

        if(a[pos]==key)
        {
        printf("%d found at %d",key,pos);flag=1;break;
          }

      if(a[pos]<key)
        lo=pos+1;

      if(a[pos]>key)
        hi=pos+1;
    }
  if(flag==0)
    printf("Element not found");
}
