#include <stdio.h>
struct Marks
{
  int rollno;
  char name[20];
  float chem_marks;
  float maths_marks;
  float phy_marks;
};
float perc(float c,float m,float p)
{
  float sum=c+m+p;
  return ((sum/300)*100);
}
void main()
{
  struct Marks a[5];
  int i;
  float perca=0.0;
  for(i=0;i<5;i++)
    {
      printf("Enter the details of student\n");
      scanf("%d %s",&a[i].rollno,a[i].name);
      printf("Enter marks of Chem,Math,Phy\n");
      scanf("%f%f%f",&a[i].chem_marks,&a[i].maths_marks,&a[i].phy_marks);
    }
  printf("\nDetails of Students\n\n");
  for(i=0;i<5;i++)
    {
      perca=perc(a[i].chem_marks,a[i].maths_marks,a[i].phy_marks);
      printf("Roll No: %d \n Name: %s \n Marks:\n Chem: %f, Maths: %f, Phy: %f\n Percentage: %f\n\n",a[i].rollno,a[i].name,a[i].chem_marks,a[i].maths_marks,a[i].phy_marks,perca);
    }
}
