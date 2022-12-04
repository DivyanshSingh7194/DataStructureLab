#include<stdio.h>
#include<math.h>
long long Rev(int a)
{
  if(a==0)
    return 0;
  else
    printf("%d",a%10);
    Rev(a/10);
}
void main()
{
  long long n;
  printf("Enter the number\n");
  scanf("%d",&n);
  printf("Reverse of number\n");
  Rev(n);
}
