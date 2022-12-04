#include<stdio.h>
int Fibo(int n,int a[])
{
  if(n==0)
    a[0]=0;
  else if(n==1)
    a[1]=1;
  else
    if(a[n]==0)
      a[n]=Fibo(n-1,a)+Fibo(n-2,a);
  return a[n];
}
void main()
{
  int n,i;
  printf("Enter the number\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    {
      a[i]=0;
    }
  for(i=0;i<n;i++)
    {
      printf("%d ",Fibo(i,a));
    }
}
