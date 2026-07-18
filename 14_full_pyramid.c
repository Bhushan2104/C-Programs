#include<stdio.h>

int main(){
    int n;

    printf("enter number of rows:  ");
    scanf("%d", &n);


    //outer loop runs n times --> equals to no of rows
    for(int i = 1; i<=n; i++){
        //prints spaces
        for(int j = 1; j<=n-i; j++){
            printf(" ");
        }
        //print stars
        for(int k = 1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}