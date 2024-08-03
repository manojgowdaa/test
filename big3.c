#include <stdio.h>

biggest3() {
    int num1, num2, num3;
    int max;

    // Input three numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Assume num1 is the largest initially
    max = num1;

    // Check if num2 is larger than current max
    if (num2 > max) {
        max = num2;
    }

    // Check if num3 is larger than current max
    if (num3 > max) {
        max = num3;
    }

    // Print the largest number
    printf("The largest number is: %d\n", max);
            
    return 0;
}

