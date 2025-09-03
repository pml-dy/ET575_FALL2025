/*
Pamela Day Verzonilla
August 27, 2025
Lab #1, iostream
*/
// C++ library
#include <iostream>
using namespace std;

int main() 
{
    cout << "------ Example 1: cout data ------"<<endl;
    cout<<"This is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare a variable first
    string username = "peterpan123";
    cout<<"\nWelcome to C++ \t\t"<<username<<endl;
    
    cout<<"------ Example 2: cin data ------"<<endl;
    cout<<"Enter a new username "<<endl;
    cin>>username;
    cout<<"New user is "<<username<<endl;

    cout<<"------ Example 3: Data Type ------"<<endl;
    // declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8.9;

    cout<<"Given symbol = "<<sym<<endl;
    cout<<"Given distance = "<<distance<<endl;
    cout<<"Given number = "<<number<<endl;

    cout<<"------ EXERCISE ------"<<endl;
    // declaring four variables
    string country;
    char gender;
    int zipcode;
    float rate;
    // collect data
    cout<<"Type a country: ";
    cin>>country;
    cout<<"What is your gender? (Use F/M) ";
    cin>>gender;
    cout<<"What is your zipcode? ";
    cin>>zipcode;
    cout<<"What is your tax rate? ";
    cin>>rate;
    // print the result
    cout<<"------ RESULTS ------"<<endl;
    cout<<"Enter country:\t"<<country<<endl;
    cout<<"Selected gender:\t"<<gender<<endl;
    cout<<"Zip code:\t"<<zipcode<<endl;
    cout<<"Tax rate:\t"<<rate<<endl;

    return 0;
}