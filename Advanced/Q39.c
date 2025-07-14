#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    /* ফাইল খোলা */
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    f3 = fopen("merged.txt", "w");

    /* ফাইল খুলিব পাৰিলে নাই পৰীক্ষা কৰা */
    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("ফাইল খুলিব পৰা নগ'ল\n");
        exit(1);
    }

    /* প্ৰথম ফাইলৰ পৰা পঢ়ি নতুন ফাইলত লিখা */
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }
    /* দ্বিতীয় ফাইলৰ পৰা পঢ়ি নতুন ফাইলত লিখা */
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    printf("ফাইলবোৰ সফল ভাৱে মাৰ্জ কৰা হ'ল\n");

    /* ফাইলবোৰ বন্ধ কৰা */
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}
