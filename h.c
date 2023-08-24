#include <stdio.h>
int main()
 {
    int x,y;
    int a[30][60];
    int i,j;
     //int sum=0;
  
  printf("enter array size o rows and column :");
     { 
     scanf("%d",&x,&y);
  }
  printf("enter no of element:");
  
             for (i=0;i<=x-1;i++)
  {
  for (j=0;j<=x-1;j++)
  {
     scanf("%d",&a[i][j]);
  }
             }
             for (i=0;i<=x-1;i++)
  
  {
  for (j=0;j<=x-1;j++)
  {
  
  printf("a[%d][%d]:%ls\n ",i,j,&a[i][j]);
  //sum=sum+a[i];
  }
                  //}
                //printf("sum of array = %d ",sum);
  }
  }
