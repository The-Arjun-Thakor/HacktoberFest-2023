def count_vowels_and_consonants(string):
    vowels = 0
    consonants = 0

    # Converting the string to lowercase for case-insensitive counting
    string = string.lower()

    for char in string:
        if char.isalpha():
            if char in "aeiou":
                vowels += 1
            else:
                consonants += 1

    return vowels, consonants

# Example usage:
input_string = input("Enter a string: ")
vowel_count, consonant_count = count_vowels_and_consonants(input_string)
print("Number of vowels:", vowel_count)
print("Number of consonants:", consonant_count)
