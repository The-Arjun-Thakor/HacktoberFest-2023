// LANGUAGE: Javas
// ENV: VS Code
// AUTHOR: Arushi Trivedi
// GITHUB: https://github.com/arushitrivedi


// Java Program to Count Total Number of Vowels and Consonants in a String


import java.util.*; 
class Main 
{

	// Method to print number of vowels and consonants
	public static void countVowelsAndConsonants(String str)
	{		
		int vow = 0, con = 0;
	
		// Declaring a reference String
		// which contains all the vowels
		String ref = "aeiouAEIOU";
	
		for (int i = 0; i < str.length(); i++) 
        {
			
			// Check for any special characters present 
			// in the given string
			if ((str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')|| (str.charAt(i) >= 'a' && str.charAt(i) <= 'z')) 
            {
				if (ref.indexOf(str.charAt(i)) != -1)
					vow++;
				else
					con++;
			}
		}
	
		// Print and display number of vowels and consonants
		// on console 
		System.out.println("Number of Vowels = " + vow);
        System.out.println("Number of Consonants = " + con);
	}

	// Main driver method 
	public static void main(String[] args)
	{
        //Example usage
		String str = "Hello World";
	
		// Calling the method  
		countVowelsAndConsonants(str);
	}
}
