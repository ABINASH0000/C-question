#include <stdio.h>
#include <string.h>
int main() {
    char source[100], destination[100];
    
    /* উৎস ষ্ট্ৰিং ইনপুট লোৱা */
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    
    /* ষ্ট্ৰিং কপি কৰা */
    strcpy(destination, source);
    
    /* কপি কৰা ষ্ট্ৰিং প্ৰিণ্ট কৰা */
    printf("Copied string: %s", destination);
    return 0;
}
