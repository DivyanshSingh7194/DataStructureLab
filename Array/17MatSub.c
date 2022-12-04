#include<stdio.h>
void main()
{
  int a,b,i,j;
  printf("Enter number of rows and columns of both matrixes\n");
  scanf("%d%d",&a,&b);
  int x[a][b],y[a][b],z[a][b];
  printf("Enter elements of 1st Matrix\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          scanf("%d",&x[i][j]);
        }
    }
  printf("Enter elements of 2nd Matrix\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          scanf("%d",&y[i][j]);
        }
    }
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          if(x[i][j]>y[i][j])
            z[i][j]=x[i][j]-y[i][j];
          else
            z[i][j]=y[i][j]-x[i][j];
        }
    }
  printf("Subtraction of both matrixes\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          printf("%d ",z[i][j]);
        }
      printf("\n");
    }
}
