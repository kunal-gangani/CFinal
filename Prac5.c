/*
Write a C program that uses structures to represent a book (with attributes like title,
author, and price).List N number of books details using Array of Objects.
Output:
Enter the Number of total Book Details : 2
Enter the Title of Book 1 : Clanguage
Enter the Name of Author 1 : Anonymous
Enter the Price of Book 1 : 1230
Enter the Title of Book 2 : C++language
Enter the Name of Author 2 : Anonymous2
Enter the Price of Book 2 : 120

Book 1 Name : C++language
Author 1 Name : Anonymous2
Book 1 Price : 120
Book 2 Name : C++language
Author 2 Name : Anonymous2
Book 2 Price : 120
*/
#include<stdio.h>
#include<string.h>
struct Book{
	char title[50];
	char author[50];
	int price;
};
void main(){
	int n,i;
	printf("Enter the Number of total Book Details : ");
	scanf("%d",&n);
	struct Book b;
	for(i=1;i<=n;i++){
		printf("Enter the Title of Book %d : ",i);
		scanf("%s",&b.title);
		printf("Enter the Name of Author %d : ",i);
		scanf("%s",&b.author);
		printf("Enter the Price of Book %d : ",i);
		scanf("%d",&b.price);
	}
	for(i=1;i<=n;i++){
		printf("\nBook %d Name : %s ",i,b.title);
		printf("\nAuthor %d Name : %s ",i,b.author);
		printf("\nBook %d Price : %d ",i,b.price);
	}
}
