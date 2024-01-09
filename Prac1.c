/*
Q1.Implement a C Program to stimulate a simple calculator that performs addition,
subtraction, multiplication and division based on the user input.
Output:
Calculator..
Enter Number 1 : 5
Enter Number 2 : 2
Enter 1 for Addition
Enter 2 for Substraction
Enter 3 for Multiplication
Enter 4 for Division
Enter Your Choice : 3

The Multiplication of 5 and 2 is : 10
*/
#include<stdio.h>
void main(){
	int choice,n1,n2;
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Substraction \n");
	printf("Enter 3 for Multiplication \n");
	printf("Enter 4 for Division \n");
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nThe Addition of %d and %d is : %d ",n1,n2,n1+n2);
			break;
		case 2:
			printf("\nThe Subtraction of %d and %d is : %d ",n1,n2,n1-n2);
			break;
		case 3:
			printf("\nThe Multiplication of %d and %d is : %d ",n1,n2,n1*n2);
			break;
		case 4:
			printf("\nThe Division of %d and %d is : %d ",n1,n2,n1/n2);
			break;
		default:
			printf("\nYou chose Invalid Input...");
					
	}
}
