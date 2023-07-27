#include <stdio.h>

int main()
{
    int i,j,sum[10][10],a[10][10],b[10][10];
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
        printf("enter the values of matrix a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
     for(i=0;i<2;i++)
     for(j=0;j<2;j++)
     {
         printf("enter the valuesof matrix b[%d][%d]",i,j);
         scanf("%d",&b[i][j]);
     }
      for(i=0;i<2;i++)
      for(j=0;j<2;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
        printf("%d\t",sum[i][j]);
        
    }
    printf("\n");

}

