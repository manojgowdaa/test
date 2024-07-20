#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check which number is bigger
    if (num1 > num2) {
        printf("%d is the bigger number.\n", num1);
    } else {
        printf("%d is the bigger number.\n", num2);
    }

    return 0;
}

