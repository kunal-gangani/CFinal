/*
Output:
 11
 12  13
 14  15  16
 17  18  19  20
 21  22  23  24  25
*/
#include<stdio.h>
void main(){
	int i,j,k=11;
	for(i=16;i>=11;i--){
		for(j=i;j<16;j++){
			printf(" %d ",k++);
		}
		printf("\n");
	}
}
