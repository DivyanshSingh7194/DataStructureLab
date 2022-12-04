#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a,b,c,d,i,j,k,sum=0;
  printf("Enter number of rows and columns of 1st Matrix\n");
  scanf("%d%d",&a,&b);
  printf("Enter number of rows and columns of 2nd Matrix\n");
  scanf("%d%d",&c,&d);
  if(b==c)
  {
    int x[a][b],y[c][d],z[a][d];
    printf("Enter elements of 1st Matrix\n");
    for(i=0;i<a;i++)
      {
        for(j=0;j<b;j++)
          {
            scanf("%d",&x[i][j]);
          }
      }
    printf("Enter elements of 2nd Matrix\n");
    for(i=0;i<c;i++)
      {
        for(j=0;j<d;j++)
          {
            scanf("%d",&y[i][j]);
          }
      }
    for(i=0;i<a;i++)
      {
        for(j=0;j<d;j++)
          {
            sum=0;
            for(k=0;k<a;k++)
              {
                sum=sum+(x[i][k]*y[k][j]);
              }
            z[i][j]=sum;
          }
      }
    printf("Multiplied Array\n");
    for(i=0;i<a;i++)
      {
        for(j=0;j<d;j++)
          {
            printf("%d ",z[i][j]);
          }
        printf("\n");
      }
  }
  else
  {
    printf("Wrong Input");
    exit(0);
  }
}
