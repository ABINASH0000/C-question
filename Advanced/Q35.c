#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    /* পইন্টাৰ ব্যৱহাৰ কৰি সলনি কৰা */
    swap(&a, &b);
    
    /* সলনি কৰাৰ পিছৰ মান */
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
