#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    /* মেট্ৰিক্স গুণন সম্ভৱ নে নাই পৰীক্ষা কৰা */
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    
    int a[r1][c1], b[r2][c2], product[r1][c2];
    
    /* প্ৰথম মেট্ৰিক্সৰ উপাদান ইনপুট লোৱা */
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    
    /* দ্বিতীয় মেট্ৰিক্সৰ উপাদান ইনপুট লোৱা */
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    
    /* মেট্ৰিক্সৰ গুণফল গণনা কৰা */
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Product of matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}
