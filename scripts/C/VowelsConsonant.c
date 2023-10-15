#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct VowelConsonantCount {
    int vowels;
    int consonants;
};

struct VowelConsonantCount countVowelsAndConsonants(const char *str) {
    struct VowelConsonantCount counts;
    counts.vowels = 0;
    counts.consonants = 0;

    
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // Convert the character to lowercase

        // Check if the character is an alphabet letter
        if (isalpha(c)) {
            // Check if the character is a vowel
            if (strchr("aeiou", c) != NULL) {
                counts.vowels++;
            } else {
                counts.consonants++;
            }
        }
    }

    return counts;
}

int main() {
    
    const char *exampleString = "Hello World";
    struct VowelConsonantCount exampleResult = countVowelsAndConsonants(exampleString);

    printf("Example String - Vowels: %d\n", exampleResult.vowels);
    printf("Example String - Consonants: %d\n", exampleResult.consonants);

    return 0;
}
