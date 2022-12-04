#include<stdio.h>
#include<stdlib.h>
struct student
{
  int rollno;
  char name[20];
  double perc;
};
void main()
{
  int i,N;
  printf("Enter size value\n");
  scanf("%d",&N);
  struct student *p;
  p=(struct student *)malloc(N*sizeof(struct student));
  printf("Enter details\n");
  for(i=0;i<N;i++)
    {
      scanf("%d%s%lf",&((p+i)->rollno),(p+i)->name,&((p+i)->perc));
    }
  for(i=0;i<N;i++)
    {
      printf("%d\t%s\t%.2lf\t",(p+i)->rollno,(p+i)->name,(p+i)->perc);
      printf("\n");
    }
}
