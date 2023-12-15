/*
Q.3 Write a program to find the average of all elements in a 2D array.
*/

#include<stdio.h>

int main()
{
 	int i,j,m,n,row,column;
 	float a[10][10], sum=0.0, avg;

 	printf("Enter row size:");
 	scanf("%d", &row);
 	
 	printf("Enter column size:");
 	scanf("%d", &column);
 	
	printf("Enter matrix elements:\n");
	
 		for(i=0;i<row;i++)
 		{
  			for(j=0;j<column;j++)
  			{
  				 printf("a[%d][%d]=",i,j);
   				 scanf("%f", &a[i][j]);
  			}
 		}

 for(i=0;i< m;i++);
 {
  for(j=0;j< n;j++)
  {
   sum = sum + a[i][j];
  }
 }

 avg = sum/(m*n);
 printf("Sum = %f\n", sum);
 printf("Average = %f", avg);

}
