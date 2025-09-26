#include <stdio.h>
int main (){
    int number1;
    int number2;
    printf("Enter a number1: ");
    scanf("%d", &number1);
    printf("Enter a number2: ");
    scanf("%d", &number2);
    if (number1>number2){
        printf("number1 is greater than number2\n");
    }
    else if (number1<number2)
    {
        printf("number2 is greater than number1\n");
    }
    else
    {
        printf("number1 is equal to number2\n");
    }}
        