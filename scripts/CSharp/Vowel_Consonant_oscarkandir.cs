using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Enter a string: ");
        string inputString = Console.ReadLine();

        // Convert the input string to lowercase to simplify counting
        inputString = inputString.ToLower();

        int vowelCount = 0;
        int consonantCount = 0;

        // Define a set of vowels
        string vowels = "aeiou";

        foreach (char character in inputString)
        {
            if (Char.IsLetter(character))
            {
                if (vowels.Contains(character))
                {
                    vowelCount++;
                }
                else
                {
                    consonantCount++;
                }
            }
        }

        Console.WriteLine("Number of vowels: " + vowelCount);
        Console.WriteLine("Number of consonants: " + consonantCount);
    }
}