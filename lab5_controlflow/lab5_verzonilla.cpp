/*
Pamela Day Verzonilla
Lab 4, Control Flow
September 10th, 2025
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
    cout<<"\n------ Example 1: bool variable ------"<<endl;
    // check if a number is positive
    // declare and collect a number
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    // step 2) check if the number is positive
    bool checkpositive = n>=0;
    // step 3) print the result
    cout<<"Is "<<n<<" positive? "<<checkpositive<<endl;

    cout<<"\n------ Example 2: if statement ------"<<endl;
    //change the checking_code to 999 if a number is positive
    int checking_code = 111;
    if(n>=0){
        checking_code = 999;
    }
    cout<<"Checking code = "<<checking_code<<endl;

    cout<<"\n------ Example 3: if-else statement (even/odd) ------"<<endl;
    // check if a number is even or odd
    if(n%2==0){
        cout<<n<<" is EVEN."<<endl;
    }
    else{
        cout<<n<<" is ODD."<<endl;
    }

    cout<<"\n------ Example 4: if-else statement (absolute value) ------"<<endl;
    // absolute value
    if (n>=0){
        cout<<n<<" is positive."<<endl;
    }
    else{
        cout<<n<<" is negative."<<endl;
        n*=-1;
        cout<<"The absolute value is: "<<n<<endl;
    }

    cout<<"\n------ Example 5: Multiway Statement ------"<<endl;
    // select the color according to a wavelength
    int wavelength;
    string emitted_color="";
    cout<<"Enter a wavelength between 0nm and up: "<<endl;
    cin>>wavelength;
    // multiway conditional statement
    if(0<=wavelength&&wavelength<=379)
        emitted_color="ultraviolet";
    else if(380<=wavelength&&wavelength<=520)
        emitted_color="blue";
    else if(521<=wavelength&&wavelength<=590)
        emitted_color="green";
    else if(591<=wavelength&&wavelength<=740)
        emitted_color="red";
    else if(wavelength>=741)
        emitted_color="infrared";
    else
        emitted_color="invalid wavelength";
    // print result
    cout<<"The emitted color of wavelength "<<wavelength<<" is "<<emitted_color<<endl;

    cout<<"\n------ EXERCISE ------"<<endl;
    // declare variables
    string gpa ="";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade= 0;

    // collect the values for final_exam, labs, and homework
    cout<<"Enter the grade for the final exam: "<<endl;
    cin>>final_exam;
    cout<<"Enter the grade for the labs: "<<endl;
    cin>>labs;
    cout<<"Enter the grade for the homeworks: "<<endl;
    cin>>homework;

    // calculate the grade = final_exam*0.5+labs*0.3+homework*0.2
    grade=final_exam*0.5+labs*0.3+homework*0.2;

    // multiway conditional statement
    // grade: between 100 and 90, GPA = A
    // grade: between 89 and 80, GPA = B
    // grade: between 79 and 70, GPA = C
    // grade: between 69 and 60, GPA = D
    // grade: below 59, GPA = F
    // any other grade, GPA = ""
    if(100>=grade&&grade>=90)
        gpa="A";
    else if(89>=grade&&grade>=80)
        gpa="B";
    else if(79>=grade&&grade>=70)
        gpa="C";
    else if(69>=grade&&grade>=60)
        gpa="D";
    else if(59>=grade)
        gpa="F";
    else
        gpa="invalid";

    // print the result
    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;

    return 0;
}