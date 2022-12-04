#include<stdio.h>
void main()
{
  struct Student
  {
    char name[20];
    int rollno;
    int marks;
  };
  struct Student s;
  int i,flag=0;
  printf("Enter student name\n");
  scanf("%s",s.name);
  printf("Enter roll no\n");
  scanf("%d",&s.rollno);
  printf("Enter marks of 6 subjects\n");
  for(i=0;i<6;i++)
    {
      scanf("%d",&s.marks);
      if(s.marks>=95&&s.marks<=100)
        flag++;
    }
  if(flag>=4)
    printf("%s is ELigible for DU",s.name);
  else
    printf("%s is NOT Eligible for DU",s.name);
}
