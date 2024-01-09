/*
Write a C program that writes any 3 employees name along with their designations in a
file called data.txt by taking input from user dynamically.
Output:
Enter Employee 1 Name : Kunal
Enter Employee 1 Designation : Ceo
Enter Employee 2 Name : Jai
Enter Employee 2 Designation : HR
Enter Employee 3 Name : Harish
Enter Employee 3 Designation : Manager


*/
#include<stdio.h>
#include<string.h>
void main(){
	char ename[30];
	char dsgn[30];
	int i;
	FILE *p;
	p=fopen("data.txt","a");
	for(i=1;i<=3;i++){
		printf("Enter Employee %d Name : ",i);
		scanf("%s",&ename[i]);
		printf("Enter Employee %d Designation : ",i);
		scanf("%s",&dsgn[i]);
	}
	for(i=1;i<=3;i++){
		fputs("%s",ename[i]);
		fputs("%s",dsgn[i]);
	}
}
