#include<stdio.h>
struct Student
{
  int rollno;
  char name[20];
  int age;
  char address[100];
  int marks;
};
void main()
{
  struct Student Det[15];
  int i;
  for(i=0;i<15;i++)
    {
      printf("Enter roll no,name,age,address & marks\n");
      scanf("%d %s %d %s %d",&Det[i].rollno,Det[i].name,&Det[i].age,Det[i].address,&Det[i].marks);
    }
  printf("\nDetails of each student\n");
  for(i=0;i<15;i++)
    {
      printf("%d\t %s\t %d\t %s\t %d\n",Det[i].rollno,Det[i].name,Det[i].age,Det[i].address,Det[i].marks);
    }
}
