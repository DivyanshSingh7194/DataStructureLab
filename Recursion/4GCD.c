#include<stdio.h>
int GCD(int x,int y)
{
  if(x==y)
    return x;
  else
  {
    if(x>y)
      return GCD(x-y,y);
    else
      return GCD(x,y-x);
  }
}
int GCDmod(int x,int y)
{
  if(x==0)
    return y;
  else if(y==0)
    return x;
  else
  {
    if(x>y)
      return GCDmod(x%y,y);
    else
      return GCDmod(x,y%x);
  }
}
void main()
{
  int a,b;
  printf("Enter first no.\n");
  scanf("%d",&a);
  printf("Enter second no.\n");
  scanf("%d",&b);
  printf("Highest Common Factor:%d\n",GCD(a,b));
  printf("Highest Common Factor through modules:%d",GCDmod(a,b));
}
