#include <stdio.h>
int main() {
    int n, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    /* নতুন উপাদানৰ বাবে স্থান ইনপুট লোৱা */
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);
    
    /* নতুন উপাদান সন্নিৱিষ্ট কৰা */
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    
    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
