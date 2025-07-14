#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    
    /* ষ্ট্ৰিং ইনপুট লোৱা */
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    /* নতুন লাইন চিহ্ন বাদ দিয়া */
    str[strcspn(str, "\n")] = 0;

    /* ষ্ট্ৰিং কপি কৰি উল্টোৱা */
    strcpy(rev, str);
    strrev(rev); // ষ্ট্ৰিং উল্টোৱা

    /* প্যালিনড্ৰোম চেক কৰা */
    if (strcmp(str, rev) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
