#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if(percentage >= 90 && percentage <= 100){
        printf("Grade A+");
    }else if(percentage >= 80){
         printf("Grade A");
    }else if(percentage >= 70){
        printf("Grade B");
    }else if(percentage >= 60){
        printf("Grade C");
    }else if(percentage >= 50){
        printf("Grade D");
    }else{
        printf("fail");
    }

    return 0;
}