#include <stdio.h>
int main(){
    float principal, rate, time, simpleinterest;
    printf("enter the principal ammount: ");
    scanf("%f" , &principal);
    printf("enter the annual rate of interest:");
    scanf("%f" , &rate);
    printf("enter the time period: ");
    scanf("%f" , &time);
    simpleinterest = (principal * rate * time)/100;
    printf("the simple interest is: %.2f\n", simpleinterest);
    return 0;
}