#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    
    /* ষ্ট্ৰিং ইনপুট লোৱা */
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    /* ষ্ট্ৰিংৰ দৈৰ্ঘ্য গণনা কৰা */
    while (str[length] != '\0') {
        length++;
    }
    
    /* দৈৰ্ঘ্য প্ৰিণ্ট কৰা */
    printf("Length of the string: %d\n", length - 1); // নতুন লাইন চিহ্ন বাদ দিয়া
    return 0;
}
