#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) return 1; // 0 ৰ ফেক্টৰিয়েল 1
    return n * factorial(n - 1); // পুনৰাবৃত্তি
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %llu\n", n, factorial(n));
    return 0;
}
