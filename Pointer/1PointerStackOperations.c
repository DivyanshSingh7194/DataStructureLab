#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define STACKSIZE 10

struct stack
{
  int item[STACKSIZE];
  int TOP;
};
void inititalize(struct stack *s1)
{
  s1->TOP=-1;
}
int isEmpty(struct stack *s1)
{
  if(s1->TOP==-1)
    return TRUE;
  else
    return FALSE;
}
int stackTOP(struct stack *s1)
{
  int x=s1->item[s1->TOP];
  return x;
}
int pop(struct stack *s1)
{
  if(isEmpty(&(*s1)))
  {
    printf("Stack Underflow\n");
    exit(1);
  }
  int x=s1->item[s1->TOP];
  s1->TOP--;
  return x;
}
void push(struct stack *s1,int x)
{
  if(s1->TOP==(STACKSIZE-1))
  {
    printf("Stack Overflow\n");
    exit(1);
  }
  s1->TOP++;
  s1->item[s1->TOP]=x;
}
void main()
{
  struct stack s;
  inititalize(&s);
  push(&s,10);
  push(&s,20);
  push(&s,30);
  push(&s,40);
  printf("%d\n",pop(&s));
  printf("%d\n",stackTOP(&s));
  printf("%d\n",pop(&s));
  printf("%d\n",pop(&s));
}
