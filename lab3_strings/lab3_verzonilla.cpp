/*
Pamela Day Verzonilla
Lab 3, String and String Methods
September 8th, 2025
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n------ Example 1: String Indexing ------"<<endl;
    string first_name = "Peter";
    // index number in string indicates character location from 0 from the first character on the most-left, use [] or .at()
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name.at(0)<<endl;

    cout<<"\n------ Example 2: Amount of Characters in a String ------"<<endl;
    // length method returns integer amount of characters that a string has
    int characters = first_name.length();
    cout<<"There are "<<characters<<" characters in "<<first_name<<endl;

    cout<<"\n------ Example 3: Concatenate Characters in a String ------"<<endl;
    // strings can be added or concatenated using the + operator (only operator you can use on a string in C++)
    string last_name = "Pan";
    string username = "PP123";
    cout<<"Concatenated word = "<<first_name + last_name + username<<endl;

    cout<<"\n------ Example 4: Subtracting Characters in a String ------"<<endl;
    string msg = "Today is a beautiful day!";
    // extract 5 characters from the 3rd character using substr() method, you need two values (where to start, how many characters)
    string subst_char = msg.substr(2,5);
    cout<<"Original message = "<<msg<<endl;
    cout<<"Extracted characters = "<<subst_char<<endl;

    cout<<"\n------ Example 5: Inserting Characters in a String ------"<<endl;
    // insert the word "maybe" using .insert (starting index number, new string)
    msg.insert(5," maybe");
    cout<<"After insert method = "<<msg<<endl;

    cout<<"\n------ Example 6: Add Characters to the End of a String ------"<<endl;
    // use .append method, no need to specify index number
    msg.append(" -- by Pam");
    cout<<"After append method = "<<msg<<endl;

    cout<<"\n------ Example 7: Replacing Characters in a String ------"<<endl;
    // use .replace() with three arguments (starting index, number of characters to replace, new string)
    msg.replace(17,9,"bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n------ Example 8: Erase Characters in a String ------"<<endl;
    // use .erase() with two arguments (starting index, number of characters)
    msg.erase(0,6);
    // did 6 to erase the extra space in msg
    cout<<"After erase method = "<<msg<<endl;

    cout<<"\n------ Example 9: Erase Characters in a String ------"<<endl;
    // .find() accepts one argument (characters to find in a string; find method returns index number of the first found
    // if the character is not found, it returns -1
    // find "Prof"
    int index_prof = msg.find("Prof");
    cout<<"The index of Prof = "<<index_prof<<endl;
    // find "Pam"
    int index_pam = msg.find("Pam");
    cout<<"The index of Pam = "<<index_pam<<endl;

    cout<<"\n------ EXERCISE -----"<<endl;
    // ask the user to type a word from the keyboard, save in a variable named "word"
    string word="";
    cout<<"Type any word that has 5 characters: "<<endl;
    cin>>word;
    // print the 2nd character of the word
    cout<<"2nd character: "<<word[1]<<endl;
    // find and print the length of the word
    int length_word = word.length();
    cout<<"Word has "<<length_word<<" characters."<<endl;
    // replace 2 characters from the 3rd character with "-- $ --", print result
    cout<<"Replace 2 characters from word: "<<word.replace(2,2,"--$--")<<endl;
    // remove 3 characters from the end of the word, print result
    cout<<"Remove 3 end characters: "<<word.erase(5,3)<<endl;

    return 0;
}