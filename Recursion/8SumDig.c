#include<stdio.h>
int Sum(int a)
{
  int b=a%10;
  if(a==0)
    return 0;
  else
    return b+(Sum(a/10));
}
void main()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  printf("Sum is %d",Sum(n));
}
