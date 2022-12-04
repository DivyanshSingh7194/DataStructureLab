#include<stdio.h>


void MergArr(int o,int p,int a[],int b[])
{
  int i=0,j=0,k=0,c[o+p];
  while(i!=o&&j!=p)
    {
      if(a[i]<b[j])
      {
        c[k]=a[i];
        k++;i++;
      }
      else
      {
        if(b[j]<a[i])
        {
          c[k]=b[j];
          k++;j++;
        }
        else
        {
          c[k]=a[i];
          k++;i++;
        }
      }
    }
  while(i!=o)
    {
      c[k]=a[i];
      k++;i++;
    }
  while(j!=p)
    {
      c[k]=b[j];
      k++;j++;
    }
  printf("Merged Sets\n");
  for(i=0;i<o+p;i++)
    {
      printf("%d ",c[i]);
    }
  printf("\n\n");
}


void Union(int o,int p,int a[],int b[])
{
  int i=0,j=0,k=0,flag=0,c[o+p];
  while(i!=o&&j!=p)
    {
      if(a[i]<b[j])
      {
        c[k]=a[i];
        k++;i++;
      }
      else
      {
        if(b[j]<a[i])
        {
          c[k]=b[j];
          k++;j++;
        }
        else
        {
          c[k]=a[i];
          k++;i++;j++;flag++;
        }
      }
    }
  while(i!=o)
    {
      c[k]=a[i];
      k++;i++;
    }
  while(j!=p)
    {
      c[k]=b[j];
      k++;j++;
    }
  printf("Union of Sets\n");
  for(i=0;i<o+p-flag;i++)
    {
      printf("%d ",c[i]);
    }
  printf("\n\n");
}


void InterSect(int o,int p,int a[],int b[])
{
  int i=0,j=0,k=0,flag=0,c[o+p];
  while(i!=o&&j!=p)
    {
      if(a[i]<b[j])
      {
        i++;
      }
      else
      {
        if(b[j]<a[i])
        {
          j++;
        }
        else
        {
          c[k]=a[i];
          k++;i++;j++;flag++;
        }
      }
    }
  while(i!=o)
    {
      c[k]=a[i];
      k++;i++;
    }
  while(j!=p)
    {
      c[k]=b[j];
      k++;j++;
    }
  printf("Intersection of Sets\n");
  for(i=0;i<flag;i++)
    {
      printf("%d ",c[i]);
    }
  printf("\n\n");
}


void Diff(int o,int p,int a[],int b[])
{
  int i=0,j=0,k=0,c[o+p],d[o+p],flag=0;
  while(i!=o)
    {
      if(a[i]==b[j])
      {
        i++;j++;
      }
      else
      {
        if(a[i]<b[j])
        {
          c[k]=a[i];
          k++;i++;flag++;
        }
        else
        {
          j++;
        }
      }
    }
  while(i!=o)
    {
      c[k]=a[i];
      i++;k++;flag++;
    }
  printf("Diff of 1st from 2nd\n");
  for(i=0;i<flag;i++)
    {
      printf("%d ",c[i]);
    }
  printf("\n");
  printf("\n");
  i=0,j=0,k=0,flag=0;
  while(j!=p)
    {
      if(b[j]==a[i])
      {
        j++;i++;
      }
      else
      {
        if(b[j]<a[i])
        {
          d[k]=b[j];
          k++;j++;flag++;
        }
        else
        {
          i++;
        }
      }
    }
  while(j!=p)
    {
      d[k]=b[j];
      j++;k++;flag++;
    }
  printf("Diff of 2nd from 1st\n");
  for(i=0;i<flag;i++)
    {
      printf("%d ",d[i]);
    }
  printf("\n\n");

}


void SymmDiff(int o,int p,int a[],int b[])
{
  int i=0,j=0,k=0,c[o+p],d[o+p],e[o+p],flag1=0;
  while(i!=o)
    {
      if(a[i]==b[j])
      {
        i++;j++;
      }
      else
      {
        if(a[i]<b[j])
        {
          c[k]=a[i];
          k++;i++;flag1++;
        }
        else
        {
          j++;
        }
      }
    }
  while(i!=o)
    {
      c[k]=a[i];
      i++;k++;flag1++;
    }
  i=0,j=0,k=0;
    int flag2=0;
  while(j!=p)
    {
      if(b[j]==a[i])
      {
        j++;i++;
      }
      else
      {
        if(b[j]<a[i])
        {
          d[k]=b[j];
          k++;j++;flag2++;
        }
        else
        {
          i++;
        }
      }
    }
  while(j!=p)
    {
      d[k]=b[j];
      j++;k++;flag2++;
    }
  i=0,j=0,k=0;
    int flag3=0;
  while(i!=flag1&&j!=flag2)
    {
      if(c[i]<d[j])
      {
        e[k]=c[i];
        i++;k++;flag3++;
      }
      else if(c[i]>d[j])
      {
        e[k]=d[j];
        j++;k++;flag3++;
      }
    }
  while(i!=flag1)
    {
      e[k]=c[i];
      i++;k++;flag3++;
    }
  while(j!=flag2)
    {
      e[k]=d[j];
      j++;k++;flag3++;
    }
  printf("Symmetric Difference of Sets\n");
  for(i=0;i<flag3;i++)
    {
      printf("%d ",e[i]);
    }
  printf("\n");
}


void main()
{
  int m,n,i;
  printf("Enter the number of elements\n");
  scanf("%d%d",&m,&n);
  int a[m],b[n];
  printf("Enter elements of Set A\n");
  for(i=0;i<m;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter elements of Set B\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
  printf("\n");
  MergArr(m,n,a,b);
  Union(m,n,a,b);
  InterSect(m,n,a,b);
  Diff(m,n,a,b);
  SymmDiff(m,n,a,b);
}
