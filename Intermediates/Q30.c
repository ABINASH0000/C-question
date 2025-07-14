#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, whitespaces = 0;

    /* ষ্ট্ৰিং ইনপুট লোৱা */
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* ষ্ট্ৰিংৰ উপাদান চেক কৰা */
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            whitespaces++;
        }
    }

    /* ফলাফল প্ৰিণ্ট কৰা */
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Whitespaces: %d\n", whitespaces);
    return 0;
}
