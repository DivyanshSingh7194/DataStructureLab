#include<stdio.h>
int Power(int x,int n)
{
  if(n==0)
    return 1;
  else
    return x*(Power(x,n-1));
}
void main()
{
  int a,b;
  printf("Enter the no. you want power of:\n");
  scanf("%d",&a);
  printf("Enter the power\n");
  scanf("%d",&b);
  printf("%d to the power %d: %d",a,b,Power(a,b));
}
