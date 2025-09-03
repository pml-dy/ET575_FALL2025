 /*
 Pamela Day Verzonilla
 Lab 2, Operators
 September 3rd, 2025
 */
#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ example 1: arithmetic operator ------"<<endl;
    // set number format (display a specific number of decimal digits)
    cout.setf(ios::fixed);
    cout.precision(3);
    // calculate the height of a free falling object
    // free_fall = 0.5*gravity*time*time
    /*
    declare a constant (never changes its initial value) variable named 'gravity'
    const, data type, then variable (recommended to be all UPPERCASE to differ from regular variable)
    */
    const float GRAVITY = 9.8;
    // declare variable height and time. if same data type you can put into one line and use comma
    float height=0, time=0;
    // before you can do calculations, you need to collect the falling time
    cout<<"Enter a falling time in seconds: ";
    cin>>time;
    // calculate the height of a free fall object. no need to declare the type of variable again
    height = 0.5*GRAVITY*time*time;
    // print results
    cout<<"The height of a free falling object at "<<time<<" seconds is "<<height<<" meters."<<endl;

    cout<<"\n------ example 2: assignment operators ------"<<endl;
    // declare variables
    int number1 = 10, number2 = 3;
     // increment operator by 1
    cout<<"original number1 = "<<number1<<endl;
    number1 ++;
    cout<<"updated number1 = "<<number1<<endl;
    // decrement operator by 1
    cout<<"original number2 = "<<number2<<endl;
    number2 --;
    cout<<"updated number2 = "<<number2<<endl;
    // add value to a variable itself
    number2 +=5;
    cout<<"updated number2 using +=5 = "<<number2<<endl;

    /*
    other assignment operators:
    subtract -=
    multiplication *=
    division /=
    find remainder with division (modulus) %=
    */
    number1 *=2;
    cout<<"updated number1 using *=2 = "<<number1<<endl;

    cout<<"The remainder of "<<number1<<" and "<<number2<<" is "<<number1%number2<<endl;
    cout<<"number1 = "<<number1<<endl;
    cout<<"number2 = "<<number2<<endl;

    /*
    difference between % and %=
    % does not update value, just does operation
    %= updates/assigns value
    */

    number1 %= number2;
    cout<<"after %=, number1 = "<<number1<<endl;
    cout<<"after %=, number2 = "<<number2<<endl;

    cout<<"\n------ example 3: comparison operators ------"<<endl;
    // comparison operators are used to compare two values; returns 1 for true and 0 for false
    cout<<"Is number1 equal to number2? "<<(number1==number2)<<endl;
    cout<<"Is number1 greater than number? "<<(number1>number2)<<endl;
    cout<<"Is number1 less than number2? "<<(number1<number2)<<endl;
    cout<<"Is number1 not equal to number2? "<<(number1!=number2)<<endl;
    // additional operators: greater than or equal to >=, less than or equal to <=

    return 0;
}