#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int a[r][c], transpose[c][r];
    
    /* মেট্ৰিক্সৰ উপাদান ইনপুট লোৱা */
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    
    /* মেট্ৰিক্সৰ ট্ৰান্সপ'জ গণনা কৰা */
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            transpose[j][i] = a[i][j];
    
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
