#include <stdio.h>

int main() {
    char op;
    double a, b;
    
    /* অপাৰেটৰ ইনপুট লোৱা */
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    /* সংখ্যা দুটা ইনপুট লোৱা */
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    
    /* অপাৰেশ্যন অনুসৰি ফলাফল প্ৰিণ্ট কৰা */
    switch(op) {
        case '+': printf("%.2f\n", a + b); break;
        case '-': printf("%.2f\n", a - b); break;
        case '*': printf("%.2f\n", a * b); break;
        case '/':
            if (b != 0) {
                printf("%.2f\n", a / b);
            } else {
                printf("Error! Division by zero\n");
            }
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
