#include <stdio.h>
int main() {
    int n, i, largest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    /* এৰেৰ ভিতৰত সৰ্বাধিক মান বিচাৰ কৰা */
    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest element: %d\n", largest);
    return 0;
}
