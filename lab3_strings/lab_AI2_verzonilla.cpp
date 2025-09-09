/*
Pamela Day Verzonilla
Lab Exercise AI 2
September 9th, 2025
Second AI Assistant: Google Gemini
*/

#include <iostream>
#include <string>

int main() {
    // Variable to store the user's word
    std::string word;

    // Prompt the user for input
    std::cout << "Enter a word: ";
    std::cin >> word;

    // 1. Print the 2nd character
    // We check if the word has at least 2 characters to avoid an out-of-bounds error.
    if (word.length() >= 2) {
        std::cout << "2nd character:\t" << word[1] << std::endl;
    } else {
        std::cout << "2nd character:\tWord is too short." << std::endl;
    }

    // 2. Find and print the length of the word
    std::cout << "word has:\t" << word.length() << " characters" << std::endl;

    // 3. Replace 2 characters from the 3rd character with "-- $ --"
    // We check if the word has at least 3 characters before attempting to replace.
    if (word.length() >= 3) {
        // We use the 'replace' method, which takes a starting position and the number of characters to replace.
        // The 3rd character is at index 2 (since C++ strings are 0-indexed).
        std::string replaced_word = word;
        replaced_word.replace(2, 2, "-- $ --");
        std::cout << "Replace word:\t" << replaced_word << std::endl;
    } else {
        std::cout << "Replace word:\tWord is too short to replace characters." << std::endl;
    }

    // 4. Remove 3 characters from the end of the message
    // We ensure the word is long enough to remove 3 characters.
    if (word.length() >= 3) {
        // The 'erase' method is used here, starting from a certain position (length - 3)
        // and removing a specified number of characters (3).
        std::string trimmed_word = word;
        trimmed_word.erase(trimmed_word.length() - 3, 3);
        std::cout << "Remove end characters:\t" << trimmed_word << std::endl;
    } else {
        std::cout << "Remove end characters:\tWord is too short to remove characters." << std::endl;
    }

    return 0;
}

// --- AI Assistant Used: Google Gemini ---
// Was the code correct? Yes
// Was it readable and properly commented? It was somewhat readable but way more difficult and complex than ChatGPT.
// Were you able to explain each line of code? Yes, it is just more wordier in these lines of code.
// Did it use the same programming concepts we learned in class? We haven't done if/else yet, and it does use some of the same concepts, but not entirely.
// Terminal Output:
/*
Enter a word: pizza
2nd character:  i
word has:       5 characters
Replace word:   pi-- $ --a
Remove end characters:  pi
*/