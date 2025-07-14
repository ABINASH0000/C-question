#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    /* পইন্টাৰ আৰিথমেটিক ব্যৱহাৰ কৰি এৰেৰ উপাদান প্ৰিণ্ট কৰা */
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
