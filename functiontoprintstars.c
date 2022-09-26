#include<stdio.h>
int star(int a);
void main()
 {
     int a,i;
	printf("Enter the number of times you want star to be printed");

	scanf(" %d",&a);
	 
	 star(a);
	
 }

 int star(int a){
     
	for(int i=1;i<a;i++){
		printf("*");
	}
 }
 