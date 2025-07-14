#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    /* সংখ্যা উল্টোৱা */
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("Reversed Number: %d\n", reversed);
    return 0;
}
