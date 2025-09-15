/*
Homework 1: Strings, String Methods, and Numerical Variables
Pamela Day Verzonilla
*/

#include<iostream>
#include<string>
using namespace std;

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
    // step 6: i struggled a bit here, for some reason my results only show up when ma is actually found in the output. otherwise if there is no ma found, there's an error in my code
    int index_ma=concat.find("ma");
    // step 7: i used two different variables here because my last results had the original concatenated message replaced as well, so this resolved that issue
    string originalconcat=concat;
    string replaced_ma=originalconcat.replace(index_ma,2,"%---%");
    // step 8
    cout<<"\n------ RESULT ACTIVITY 1 ------"<<endl;
    cout<<"Concatenated Message:\t\t"<<concat<<endl;
    cout<<"Message Length:\t\t"<<length<<endl;
    cout<<"Index of Character 'ma':\t\t"<<index_ma<<endl;
    cout<<"Replace 'ma'; with %---%:\t\t"<<replaced_ma<<endl;

    cout<<"\n------ ACTIVITY 2 ------"<<endl;
    // volume=pi*height*radius^2
    // step 1
    const float pi=3.14159;
    // step 2
    float radius, height;
    cout<<"Enter the radius of the cylinder: ";
    cin>>radius;
    cout<<"Enter the height of the cylinder: ";
    cin>>height;
    // step 3
    bool radiusgreater=radius>height;
    // step 4
    bool radiusequal=radius==height;
    // step 5
    height*=3;
    radius+=5;
    // step 6
    bool notequalgreater=(radius!=height)&&(radius>height);
    // step 7
    float volume=pi*radius*radius*height;
    // step 8
    cout<<"\n------ RESULT ACTIVITY 2 ------"<<endl;
    cout<<"Is the radius greater than height? "<<radiusgreater<<endl;
    cout<<"Is the radius equal to height? "<<radiusequal<<endl;
    cout<<"Triple height = "<<height<<endl;
    cout<<"Increased radius by 5 = "<<radius<<endl;
    cout<<"Is the radius not equal to and greater than height? "<<notequalgreater<<endl;
    cout<<"The volume of a right cylinder with radius "<<radius<<" cm and height "<<height<<" cm is = "<<volume<<" cm^3"<<endl;

    return 0;
}