import java.util.Scanner;

public class CountVowelConsonant {    
    public static void main(String[] args) {    
        // Counter variables to store the count of vowels and consonants    
        int vCount = 0, cCount = 0;    

        // Create a Scanner object to read user input    
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a sentence: ");
        String str = scanner.nextLine();    

        // Converting the entire string to lower case to reduce the comparisons    
        str = str.toLowerCase();    

        for (int i = 0; i < str.length(); i++) {    
            char ch = str.charAt(i);
            // Checks whether a character is a vowel    
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {    
                // Increments the vowel counter    
                vCount++;    
            }    
            // Checks whether a character is a consonant    
            else if (ch >= 'a' && ch <= 'z') {      
                // Increments the consonant counter    
                cCount++;    
            }    
        }    

        System.out.println("Number of vowels: " + vCount);    
        System.out.println("Number of consonants: " + cCount);    

        // Close the scanner to prevent resource leak    
        scanner.close();
    }    
}

