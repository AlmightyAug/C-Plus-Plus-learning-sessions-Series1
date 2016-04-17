#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open(){char ch;cin>>ch;}

int main() //Execution of a C++ Program starts here
{
    cout << "Please enter your first name and age\n";
    string first_name;
    cin >>first_name;
    float age;
    cin >>age;
    cout <<"Hello, "<<first_name<<"(age"<<age<<")\n";

    float x = age;

    if(age>60){

            if(age>120){
                cout << "why are you still alive? \n";
            }
            if(age<121){
                cout<< "wow you are old \n";
            }
    }
    if(age<61){

            if(age>20){
                cout<<"you are young, go get a job! \n";
            }

            if(age<21){
                cout<<"how is your school life? \n";
            }
    }
}


