#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    /* সংখ্যা জোড় নে বেজী চেক কৰা */
    printf("%d is %s.\n", num, (num % 2 == 0) ? "even" : "odd");
    return 0;
}
