#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0; // 0 ত ফিবোনাচ্চি সংখ্যা 0
    if (n == 1) return 1; // 1 ত ফিবোনাচ্চি সংখ্যা 1
    return fibonacci(n - 1) + fibonacci(n - 2); // পুনৰাবৃত্তি
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}
