#include <stdio.h>

int main() {
    int p = 1234;
    int n;

    printf("Enter a password: ");
    scanf("%d", &n);  // Removed the colon from format string

    if (n == p) {
        printf("Correct password\n");
    } else {
        printf("Incorrect password\n");
    }

    return 0;
}
