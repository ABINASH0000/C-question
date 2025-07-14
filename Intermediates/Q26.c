#include <stdio.h>
int main() {
    int n, search, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    /* সন্ধানৰ বাবে মান ইনপুট লোৱা */
    printf("Enter value to search: ");
    scanf("%d", &search);
    
    /* লীনিয়াৰ ছাৰ্চ */
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    
    /* নেপালে মেছেজ */
    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}
