#include <stdio.h>

biggest2() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is the bigger number.\n", num1);
    } else {
        printf("%d is the bigger number.\n", num2);
    }

    //return 0;
}

