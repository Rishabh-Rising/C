//multiplication table of any number
#include<stdio.h>
int table(int a);
int main(){
	int a;
	printf("Enter the number whose multiplication table you want");
	scanf("%d",&a);
	table(a);
}
int table(int a){
	for(int i=1;i<100;i++){
		int c=a*i;
		printf("%d\n",c);
	}
}