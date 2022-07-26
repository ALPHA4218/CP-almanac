#include<stdio.h>
int add(int m,int n);
int subtract(int m,int n);
int multiply(int m,int n);
int divide(int m,int n);
int main(){
    int a,b;
    printf("1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter the operation(1/2/3/4):\n");
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("calculating a+b");
        printf("Enter first number a:\n");
        printf("Enter second number b\n");
        add(a,b);
        break;

        case 2:
        printf("calculating a-b");
        printf("Enter first number a:\n");
        printf("Enter second number b\n");
        subtract(a,b);
        break;

        case 3:
        printf("calculating a*b");
        printf("Enter first number a:\n");
        printf("Enter second number b\n");
        multiply(a,b);
        break;

        case 4:
        printf("calculating a/b");
        printf("Enter first number a:\n");
        printf("Enter second number b\n");
        divide(a,b);
        break;
    }
    return 0;
}