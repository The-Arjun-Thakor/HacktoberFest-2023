# 🌱 HacktoberFest 2023 Starter Project 🌱
 
Use this project to make your first contribution to an open source project on GitHub. Practice making your first pull request to a public repository before doing the real thing!

Celebrate [Hacktoberfest](https://hacktoberfest.digitalocean.com/) by getting involved in the open source community by completing some simple tasks in this project.

This repository is open to all members of the GitHub community. Any member may contribute to this project without being a collaborator.

[https://github.com/The-Arjun-Thakor/HacktoberFest-2023](https://github.com/The-Arjun-Thakor/HacktoberFest-2023)

## What is Hacktoberfest?
A month-long celebration from October 1st - 31st sponsored by [Digital Ocean](https://hacktoberfest.com/) and [GitHub](https://dev.to/this-is-learning/hacktoberfest-2023-is-almost-there-get-ready-4ifb) to get people involved in [Open Source](https://github.com/open-source). Create your very first pull request to any public repository on GitHub and contribute to the open source developer community.

[https://hacktoberfest.com/](https://hacktoberfest.com/)

## How to contribute to this project
Here are 3 quick and painless ways to contribute to this project:

* Add your name to the `CONTRIBUTORS.md` file
* Add a profile page to the `profiles` directory
* Create a simple "Hello, World" script in a language of your choice

Choose one or all 3, make a pull request for your work and wait for it to be merged!

## Getting started
* Fork this repository (Click the Fork button in the top right of this page, click your Profile Image)
* Clone your fork down to your local machine

```markdown
git clone https://github.com/The-Arjun-Thakor/HacktoberFest-2023.git
```

* Create a branch

```markdown
git checkout -b branch-name
```

* Make your changes (choose from any task below)
* Commit and push

```markdown
git add .
git commit -m 'Commit message'
git push origin branch-name
```

* Create a new pull request from your forked repository (Click the `New Pull Request` button located at the top of your repo)
* Wait for your PR review and merge approval!
* __Star this repository__ if you had fun!

## Choose from these tasks
### 1. Add your name
Add your name to the `CONTRIBUTORS.md` file using the below convention:

```markdown
## Name: [YOUR NAME](GitHub link)
- Place: City, State, Country
- Bio: Who are you?
- GitHub: [GitHub account name](GitHub link)
```

### 2. Add a profile page
Add a `Your_Name.md` file to the `profiles` directory. Use any combination of content and Markdown you'd like. Here is an example:

```markdown
# Your Name

## Location

Your City/Country

## Academics

Your School/college

## Interests

- Some Things You Like

## Development

- Inventor of the My Pillow

## Projects

- [My Project](GitHub Link) Short Description

## Profile Link

[Your Name](GitHub Link)
[Your Name](linked in profile)
```

### 3. Create a `calculate the number of vowels and consonants in a String` Program/Script in any Language
Add a `Vowel_Consonant.xx` script to the `scripts` directory in any language of your choice! Here is an example:

```Javascript
// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Arjun Thakor
// GITHUB: https://github.com/The-Arjun-Thakor

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

```

Name the file `Vowel_Consonant_yourusername.xx`. e.g., `Vowel_Consonant_arjunthakor.js` or `Vowel_Consonant_arjunthakor.py`.

Add your scripts to the specific folder for specific languages created. 

Don't forget to include the comments as seen above. Feel free to include additional information about the language you choose in your comments too! Like a link to a helpful introduction or tutorial. 

Here is my `Vowel_Consonant` example: [Vowel_Consonant_arjunthakor.js](https://github.com/he-Arjun-Thakor/hacktoberfest/blob/master/scripts/Vowel_Consonant_arjunthakor.js)

## BONUS!
* Merging All Pull Requests
* See profiles submitted by fellow coders from around the globe ... from Kathmandu to Copenhagen.
* Discover some obscure to new and trending languages ... from BrainFuck to Groovy.
* Check out some very creative ways to print out a "Hello, World!" string.


