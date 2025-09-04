#include <stdio.h>

int main() {
    int c; // User-given number (limit for the series)
    int num1 = 0, num2 = 1; // First two terms of the Fibonacci series
    int nextnum;

    printf("Enter the upper limit for the Fibonacci series: ");
    scanf("%d", &c);

    printf("Fibonacci Series up to %d: ", c);

    // Handle cases where c is 0 or 1
    if (c >= 0) {
        printf("%d", num1); // Print the first term (0)
    }
    if (c >= 1) {
        printf(", %d", num2); // Print the second term (1)
    }

    // Generate and print subsequent terms until the limit 'c' is reached
    nextnum = num1 + num2;
    while (nextnum <= c) {
        printf(", %d", nextnum);
        num1 = num2;
        num2 = nextnum;
        nextnum = num1 + num2;
    }

    printf("\n"); // Newline for better formatting
    return 0;
}
