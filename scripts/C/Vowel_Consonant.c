// LANGUAGE: C
// AUTHOR: adithya r prabhu
// GITHUB: https://github.com/adithya-r-prabhu
#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[100];
    int nv = 0, nc = 0;
    
    // Input string from the user
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    for (int i = 0; str1[i] != '\0'; ++i) {
        if (isalpha(str1[i])) {
            char ch = tolower(str1[i]);  // Convert to lowercase to simplify vowel check
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ++nv;
            } else {
                ++nc;
            }
        }
    }

    printf("Number of vowels: %d\n", nv);
    printf("Number of consonants: %d\n", nc);

    return 0;
}
