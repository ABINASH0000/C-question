#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    /* প্ৰাইম সংখ্যা চেক কৰা */
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("%d is %s prime number.\n", num, isPrime ? "" : "not a");
    return 0;
}
