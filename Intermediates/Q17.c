#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    /* সংখ্যা ডিজিটৰ সংখ্যা গণনা কৰা */
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
