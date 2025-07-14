#include <stdio.h>
int main() {
    int a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    /* GCD আৰু LCM গণনা কৰা */
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // GCD
        }
    }
    lcm = (a * b) / gcd; // LCM
    printf("GCD: %d\nLCM: %d\n", gcd, lcm);
    return 0;
}
