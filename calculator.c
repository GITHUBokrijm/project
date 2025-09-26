#include <stdio.h>
int main(){
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nMenu:\n");
    printf("1. Addition\n");  
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Sum: %d", num1 + num2);
            break;
        case 2:
            printf("Subtraction: %d", num1 - num2);
            break;
        case 3:
            printf("Multiplication: %d", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Division: %d", num1 / num2);
            else
                printf("Error! Division by zero");
            break;  
        default:
            printf("Error! Invalid choice");
    }
    return 0;
}
