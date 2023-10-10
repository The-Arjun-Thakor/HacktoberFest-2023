function countVowelsAndConsonants(str) {
  var vowelCount = 0;
  var consonantCount = 0;
  
  // Convert the string to lowercase to simplify the comparison
  str = str.toLowerCase();

  // Iterate over each character in the string
  for (var i = 0; i < str.length; i++) {
    var char = str[i];
    
    // Check if the character is a letter
    if (/[A-Z]/.test(char)) {
      // Check if the character is a vowel
      if (/[A,E,I,O,U]/.test(char)) {
        vowelCount++;
      } else {
        consonantCount++;
      }
    }
  };
  
  return {
    vowels: vowelCount,
    consonants: consonantCount
  };
}

// Example usage
var string = "SUCCESSFULL DONE";
var counts = countVowelsAndConsonants(string);

console.log("Number of vowels: " + counts.vowels);
console.log("Number of consonants: " + counts.consonants);
