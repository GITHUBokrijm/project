#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // condition for num1 greater
    if (num1 > num2)
        printf("The greater number is: %d\n", num1);
    // condition if num2 greater
    else if (num2 > num1)
        printf("The greater number is: %d\n", num2);
    else
        printf("Both numbers are equal: %d\n", num1);

    return 0;
}
