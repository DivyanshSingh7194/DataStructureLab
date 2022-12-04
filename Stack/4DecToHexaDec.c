#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define STACKSIZE 10

struct stack
{
  int item[STACKSIZE];
  int TOP;
};
struct stack s;
void inititalize()
{
  s.TOP=-1;
}
int isEmpty()
{
  if(s.TOP==-1)
    return TRUE;
  else
    return FALSE;
}
int pop()
{
  if(isEmpty())
  {
    printf("Stack Underflow\n");
    exit(1);
  }
  int x=s.item[s.TOP];
  s.TOP--;
  return x;
}
void push(int x)
{
  if(s.TOP==(STACKSIZE-1))
  {
    printf("Stack Overflow\n");
    exit(1);
  }
  s.TOP++;
  s.item[s.TOP]=x;
}
void main()
{
  inititalize();
  int a,i;
  printf("Enter the decimal\n");
  scanf("%d",&a);
  while(s.TOP!=(STACKSIZE-1))
    {
      push(a%16);
      a=a/16;
    }
  while(s.TOP!=-1)
    {
      if(s.item[s.TOP]>9)
      {
        printf("%c",(s.item[s.TOP]+55));
        pop();
      }
      else
      {
        printf("%d",pop());
      }
    }
}
