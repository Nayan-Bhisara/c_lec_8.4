/*
Q.2 Write a program to find the sum of all elements in a 2D array.
*/

#include<stdio.h>

void main(){
	int row,col;

	
	printf("Enter row size :");
	scanf("%d",&row);
	printf("Enter column size :");
	scanf("%d",&col);
	
		int a[row][col];
		int i,j, sum=0;
		
		printf("Enter value of A eliment\n");	
	for(i=0; i<row; i++){
		for(j=0; j<col;j++){
		
		printf("enter a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
		
	}
	
		printf("sum of all eliment is :");
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			
		sum+=a[i][j];
	
	}
	printf("\n");
}
	
		printf("%d ",sum);
	
}
