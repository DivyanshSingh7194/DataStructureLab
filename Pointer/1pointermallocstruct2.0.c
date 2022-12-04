#include<stdio.h>
#include<stdlib.h>
struct Student{
int rollno;
char name[20];
double perc;
};
void Input(struct Student *ptr,int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      scanf("%d%s%lf",&((ptr+i)->rollno),(ptr+i)->name,&((ptr+i)->perc));
    }
}
void Output(struct Student *ptr,int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("%d\t%s\t%.2lf\n",((ptr+i)->rollno),(ptr+i)->name,((ptr+i)->perc));
    }
}
void main()
{
  int N;
  printf("Enter no of elements\n");
  scanf("%d",&N);
  struct Student *p;
  p=(struct Student *)malloc(N*sizeof(struct Student));
  Input(p,N);
  Output(p,N);
}
