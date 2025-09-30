#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input from user
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Enter num3: ");
    scanf("%d", &num3);

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Lar
