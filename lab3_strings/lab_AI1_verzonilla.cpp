/*
Pamela Day Verzonilla
Lab Exercise AI 1
September 9th, 2025
First AI Assistant: ChatGPT
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    // Ask user for input
    cout << "Type a word: ";
    cin >> word;

    // Print the 2nd character (index 1)
    char secondChar = word.length() >= 2 ? word[1] : ' '; // handle short words

    // Find length of word
    int length = word.length();

    // Replace 2 characters starting from index 2 (3rd character)
    string replacedWord = word;
    if (replacedWord.length() >= 3) {
        replacedWord.replace(2, 2, "-- $ --");
    }

    // Remove 3 characters from the end
    string removedWord = word;
    if (removedWord.length() >= 3) {
        removedWord.erase(removedWord.length() - 3, 3);
    } else {
        removedWord = ""; // if word too short
    }

    // Display results
    cout << "\n2nd character:          " << secondChar << endl;
    cout << "word has:               " << length << " characters" << endl;
    cout << "Replace word:           " << replacedWord << endl;
    cout << "Remove end characters:  " << removedWord << endl;

    return 0;
}

// --- AI Assistant Used: ChatGPT ---
// Was the code correct? Yes
// Was it readable and properly commented? Yes and yes, much easier to read and more simple than Google Gemini.
// Were you able to explain each line of code? Most of them, but not all. In line 20 I didn't understand why there was a "?"
// Did it use the same programming concepts we learned in class? Yes, majority of it. However we haven't used if/else yet.
// Terminal Output:
/*
Type a word: pizza

2nd character:          i
word has:               5 characters
Replace word:           pi-- $ --a
Remove end characters:  pi
*/