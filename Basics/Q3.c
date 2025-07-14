#include <stdio.h>
#define PI 3.14159 /* পাইৰ মান নিৰ্ধাৰণ */

int main() {
    float radius;
    
    /* বৃত্তৰ ব্যাসাৰ্ধ ইনপুট লোৱা */
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    /* ক্ষেত্ৰফল গণনা কৰি প্ৰিণ্ট কৰা */
    printf("Area: %.2f\n", PI * radius * radius);
    return 0;
}
