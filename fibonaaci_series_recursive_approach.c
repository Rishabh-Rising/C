#include<stdio.h>
//formula for fibonacci series fn = fn-1 + fn+2 
 int fib(int n){
    if(n==1 || n==2){

        return n-1;

    }

    else{
        return fib(n-1) + fib(n-2);
        
    }  

 }
 void main(){
    int a;
    printf("Enter The Number");
    scanf("%d",&a);
    printf("The %d number is %d",a, fib(a));

 }
