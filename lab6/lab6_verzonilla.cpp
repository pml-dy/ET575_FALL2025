/*
Pamela Day Verzonilla
September 15, 2025
Lab 6: Nested Conditional Statements and Switch
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"\n------ Example 1: Nested Conditional Statement -------"<<endl;
    int n=-8;
    // nested if = if-else and if statements contain smaller statements within them
    if (n>0){
        if(n%2==0){
            cout<<"The number is positive and EVEN"<<endl;
        }
        else{
            cout<<"The number is positive and ODD"<<endl;
        }
    }
    else if (n<0){
         if(n%2==0){
            cout<<"The number is negative and EVEN"<<endl;
        }
        else{
            cout<<"The number is negative and ODD"<<endl;
        }
    }
    else{
        cout<<"The number is zero"<<endl;
    }

    cout<<"\n------ Example 2: Organize Three Numbers in Decreasing Order -------"<<endl;
    // declare the identifiers (variable names)
    int num1, num2, num3;
    // display a message and collect the three numbers
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    // check if num1 is greater than num2 and num3
    if (num1>num2&&num1>num3){
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    // check if num2 is the greatest
    else if (num2>num1&&num2>num3){
        if(num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    // check if num3 is the greatest
    else if (num3>num2&&num3>num1){
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    else{
        cout<<"All three numbers are the same"<<endl;
    }

    cout<<"\n------ Example 3: Switch -------"<<endl;
    // switch = type of selection control mchanism used to allow value of variable/expression to change contorl flow of program execution
    // select a day off using switch
    int dayoff;
    cout<<"Select a day off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cin>>dayoff;
    
    switch (dayoff)
    {
    case 1:
        cout<<"You are off on Monday"<<endl;
        break;
    case 2:
        cout<<"You are off on Tuesday"<<endl;
        break;
    case 3:
        cout<<"You are off on Wednesday"<<endl;
        break;
    case 4:
        cout<<"You are off on Thursday"<<endl;
        break;
    case 5:
        cout<<"You are off on Friday"<<endl;
        break;
    default:
        cout<<"Unable to read day off"<<endl;
        break;
    }

    cout<<"\n------ Example 4: Switch to Select a Gender -------"<<endl;
    char gender=' ';
    cout<<"Select a gender: "<<endl;
    cout<<"m/M for male"<<endl;
    cout<<"f/F for female"<<endl;
    cout<<"o/O for other"<<endl;
    cin>>gender;
    
    switch (gender)
    {
    case 'm': case'M':
    cout<<"Gender = MALE"<<endl;
        break;
    case 'f': case'F':
        cout<<"Gender = FEMALE"<<endl;
        break;
    case 'o': case'O':
        cout<<"Gender = OTHER"<<endl;
        break;
    default:
        cout<<"Gender = UNDEFINED"<<endl;
        break;
    }
    
    cout<<"\n------ EXERCISE -------"<<endl;
    // declaring  variables
    int savings;
    cout<<"Enter your savings balance: "<<endl;
    cin>>savings;

    if (savings>0&&savings<199999){
        cout<<"Keep saving!"<<endl;
    }
    else if (savings>200000&&savings<500000){
        cout<<"You can afford an apartment or co-op"<<endl;
        if (savings>200000&&savings<300000){
            cout<<"You can afford a studio"<<endl;
        }
        else if (savings>300001&&savings<400000){
            cout<<"You can afford a 1bed+1bath"<<endl;    
        }
        
    }

    return 0;
}