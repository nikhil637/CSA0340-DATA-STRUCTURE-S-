#include <stdio.h>
unsigned long long int factorial(int n) 
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    unsigned long long int result;

    printf("Enter a non-negative integer to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d is: %llu\n", num, result);
    }

    return 0;
}
