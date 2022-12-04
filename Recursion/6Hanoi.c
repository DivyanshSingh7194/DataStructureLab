#include<stdio.h>
void Hanoi(int n,char a,char b,char c)
{
  if(n==1)
    printf("Disk %d from %c to %c\n",n,a,c);
  else
  {
    Hanoi(n-1,a,c,b);
    printf("Disk %d from %c to %c\n",n,a,c);
    Hanoi(n-1,b,a,c);
  }
}
void main()
{
  int n;
  char a='A',b='B',c='C';
  printf("Enter no. of disks\n");
  scanf("%d",&n);
  Hanoi(n,a,b,c);
}
