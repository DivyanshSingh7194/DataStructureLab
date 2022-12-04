#include<stdio.h>
void main()
{
  int i,j,a,b;
  printf("Enter no. of rows and columns of matrix\n");
  scanf("%d%d",&a,&b);
  int x[a][b],y[a][b];
  printf("Enter the elements\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          scanf("%d",&x[i][j]);
        }
    }
  printf("Array is\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          printf("%d ",x[i][j]);
        }
      printf("\n");
    }
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          y[i][j]=x[j][i];
        }
    }
  printf("Transpose of Matrix\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          printf("%d ",y[i][j]);
        }
      printf("\n");
    }
}
