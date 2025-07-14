#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    /* ফাইলত লিখা */
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    printf("Enter data to write to file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);
    fclose(file);

    /* ফাইলৰ পৰা পঢ়া */
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    printf("Data read from file: ");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);
    return 0;
}
