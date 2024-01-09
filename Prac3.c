/*
Write a C program that defines a function to print a reverse 1D array and print sum 
of all elements.
Output: 
Enter the Size of Array : 5
A[0] : 1
A[1] : 2
A[2] : 3
A[3] : 4
A[4] : 5

The Original Array A:
 1  2  3  4  5
The Reverse of Array A :
 5  4  3  2  1

*/
#include<stdio.h>
void main(){
	int size,i;
	printf("Enter the Size of Array : ");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nThe Original Array A: \n");
	for(i=0;i<size;i++){
		printf(" %d ",a[i]);	
	}
	printf("\nThe Reverse of Array A : \n");
	for(i=size-1;i>=0;i--){
		printf(" %d ",a[i]);
	}
}
