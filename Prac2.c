/*
Write a C program to find the sum of elements in an array using a function.
Output:
Enter the Size of Array : 5

Enter Elements for Array Arr :
Arr[0] : 1
Arr[1] : 2
Arr[2] : 4
Arr[3] : 5
Arr[4] : 7

The Array Arr :
 1  2  4  5  7

The Sum of Elements of Array Arr is : 19
*/
#include<stdio.h>
int SumOfArray(){

}
void main(){
	int size,sum=0;
	printf("Enter the Size of Array : ");
	scanf("%d",&size);
	int arr[size];
	int i;
	printf("\nEnter Elements for Array Arr : \n");
	for(i=0;i<size;i++){
		printf("Arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	SumOfArray();
	printf("\nThe Array Arr : \n");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
		sum+=arr[i];	
	}
	printf("\n\nThe Sum of Elements of Array Arr is : %d ",sum);
}
