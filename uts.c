#include <stdio.h>

void seriesSquares() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i * i);
        if (i < n) printf(", ");
    }
    printf("\n");
}

void factorial() {
    int num;
    unsigned long long factorial = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Invalid input.\n");
    } else {
        for (int i = 1; i <= num; i++) factorial *= i;
        printf("Factorial of %d = %llu\n", num, factorial);
    }
}

void sumSeries() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) sum += i;
    printf("Sum of 1 to 100 = %d\n", sum);
}

void starPattern() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Series of Squares\n");
        printf("2. Factorial\n");
        printf("3. Sum of 1 to 100\n");
        printf("4. Star Pattern\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: seriesSquares(); break;
            case 2: factorial(); break;
            case 3: sumSeries(); break;
            case 4: starPattern(); break;
            case 5: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}