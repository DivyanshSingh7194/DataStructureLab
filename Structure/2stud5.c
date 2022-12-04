#include <stdio.h>
struct Student
  {
    int rollno;
    char name[20];
    int age;
    int marks;
  };
void Program1(struct Student p1)
{
  printf("PROGRAM 1!\n");
  printf("Enter roll no\n");
  scanf("%d",&p1.rollno);
  printf("Enter name of student\n");
  scanf("%s",p1.name);
  printf("Enter age of student\n");
  scanf("%d",&p1.age);
  printf("Enter marks of student\n");
  scanf("%d",&p1.marks);
  printf("Student details\n%d\n%s\n%d\n%d\n",p1.rollno,p1.name,p1.age,p1.marks);
}
void Program2(struct Student p2[5])
{
  printf("PROGRAM 2!\n");
  int i;
  for(i=0;i<5;i++)
    {
      printf("Enter name of student\n");
      scanf("%s",p2[i].name);
      printf("Enter age of student\n");
      scanf("%d",&p2[i].age);
    }
  printf("Details of all students\n");
  for(i=1;i<=5;i++)
    {
      printf("%d\t",i);
      printf("%s\t",p2[i-1].name);
      printf("%d\t",p2[i-1].age);
      printf("\n");
    }
}
void main()
{
  struct Student p1,p2[5];
  Program1(p1);
  Program2(p2);
}
