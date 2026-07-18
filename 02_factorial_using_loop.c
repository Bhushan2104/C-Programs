#include<stdio.h>

int main(){
    int fact = 1;
    int n;
    printf("enter a number to calculate factorial: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        fact = i * fact;
    }
    printf("Factorial of %d is = %d",n,fact);
    return 0;
}