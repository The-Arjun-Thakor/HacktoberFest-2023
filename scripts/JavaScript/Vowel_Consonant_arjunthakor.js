function countVowelsAndConsonants(str) {
  var vowelCount = 0;
  var consonantCount = 0;
  
  // Convert the string to lowercase to simplify the comparison
  str = str.toLowerCase();

  // Iterate over each character in the string
  for (var i = 0; i < str.length; i++) {
    var char = str[i];
    
    // Check if the character is a letter
    if (/[a-z]/.test(char)) {
      // Check if the character is a vowel
      if (/[aeiou]/.test(char)) {
        vowelCount++;
      } else {
        consonantCount++;
      }
    }
  }
  
  return {
    vowels: vowelCount,
    consonants: consonantCount
  };
}

// Example usage
var string = "Hello World";
var counts = countVowelsAndConsonants(string);

console.log("Number of vowels: " + counts.vowels);
console.log("Number of consonants: " + counts.consonants);
