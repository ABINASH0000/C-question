#include <stdio.h>
int main() {
    int a, b;
    
    /* সংখ্যা দুটা ইনপুট লোৱা */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    /* ডাঙৰ সংখ্যাটো নিৰ্ণয় কৰা */
    printf("Largest: %d\n", (a > b) ? a : b);
    return 0;
}
