#include<stdio.h>
void Deter3(int r,int c,int a[r][c])
{
  int det1=0,det2=0,det3=0,det=0;
  det1=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])));
  det2=(a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])));
  det3=(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));
  det=det1-det2+det3;
  printf("Determinant is %d",det);
}
void Deter2(int r,int c,int a[r][c])
{
  int det=0;
  det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
  printf("Determinant is %d",det);
}
void main()
{
  int i,j,r,c;
  printf("Enter rows and columns of Matrix\n");
  scanf("%d%d",&r,&c);
  if(r!=c)
  {
    printf("Enter equal rows please\n");
    exit(0);
  }
  if(r>3)
  {
    printf("Program not made for matrixes greater than 3\n");
    exit(0);
  }
  int a[r][c];
  printf("Enter the elements\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Array is\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  if(r==2)
    Deter2(r,c,a);
  if(r==3)
    Deter3(r,c,a);
  if(r==1)
    printf("Determinant is %d",a[0][0]);
}
