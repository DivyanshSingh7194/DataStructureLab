#include<stdio.h>
void main()
{
  int i,j,a,b,t;
  printf("Enter no. of rows and columns of matrix\n");
  scanf("%d%d",&a,&b);
  int x[a][b];
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
          if(i>j)
          {
            t=x[i][j];
            x[i][j]=x[j][i];
            x[j][i]=t;
            }
        }
    }
  printf("Transpose of Matrix\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          printf("%d ",x[i][j]);
        }
      printf("\n");
    }
}
