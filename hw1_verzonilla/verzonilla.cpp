/*
Homework 1: Strings, String Methods, and Numerical Variables
Pamela Day Verzonilla
*/

#include<iostream>
#include<string>
using namespace std;

// ACTIVITY 1

int main() {
    cout<<"\n------ ACTIVITY 1 ------"<<endl;
    // step 1
    string welcome = "Welcome to ";
    string city = "New York City ";
    // step 2
    string name="";
    cout<<"Please enter your name: ";
    cin>>name;
    // step 3
    string concat=welcome+city+name;
    // step 4
    cout<<concat<<endl;
    // step 5
    int length=concat.length();
    // step 6
    int index_ma=concat.find("ma");
    // step 7: i used two different variables here because my last results had the original concatenated message replaced as well, so this resolved that issue
    string replace1=concat;
    string replace2=replace1.replace(index_ma,2,"%---%");
    // step 8
    cout<<"\n------ RESULT ACTIVITY 1 ------"<<endl;
    cout<<"Concatenated Message:\t\t"<<concat<<endl;
    cout<<"Message Length:\t\t"<<length<<endl;
    cout<<"Index of Character 'ma':\t\t"<<index_ma<<endl;
    cout<<"Replace 'ma'; with %---%:\t\t"<<replace2<<endl;

    return 0;
}