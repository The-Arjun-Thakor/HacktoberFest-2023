#include <iostream>
#include <string>
#include <cctype> // for tolower()

using namespace std;

int main() {
    string input;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    for(char c : input) {
        c = tolower(c); // convert the character to lowercase for easier comparison
        if (c >= 'a' && c <= 'z') { // check if the character is an alphabet
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
