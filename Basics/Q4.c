#include <stdio.h>
int main() {
    int a, b, temp;
    
    /* সংখ্যা দুটা ইনপুট লোৱা */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    /* সংযোজন প্ৰক্ৰিয়া */
    temp = a;
    a = b;
    b = temp;
    
    /* বিনিময় কৰাৰ পিছত মান প্ৰিণ্ট কৰা */
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
