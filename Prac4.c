/*
Write a C program to find cube of each elements of an 1D array using Pointer.
Output:
Enter the Size of Array A : 5
Enter the Elements for Array A :
A[0] : 1
A[1] : 2
A[2] : 3
A[3] : 4
A[4] : 5
 1  2  3  4  5
The Cube of all elements in Array A are :

*/
#include<stdio.h>
void main(){
	int size,i;
	printf("Enter the Size of Array A : ");
	scanf("%d",&size);
	int a[size];
	int *ptr[size];
	printf("Enter the Elements for Array A : \n");
	for(i=0;i<size;i++){
		printf("A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		printf(" %d ",a[i]);
	}
	a[i]=(*ptr[i]);
	printf("\nThe Cube of all elements in Array A are : \n");
	for(i=0;i<size;i++){
		printf(" %d ",(*ptr[i])*(*ptr[i])*(*ptr[i]));
	}
}
