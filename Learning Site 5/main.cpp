#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int age;
    cout << "Please enter in your age for admission into Secondary School \n";
    cin >>age;

    switch(age){

        case 12:
        cout << "You are eligible for Secondary 1 \n";
        break;

        case 13:
        cout << "You are eligible for Secondary 2 \n";
        break;

        case 14:
        cout << "You are eligible for Secondary 3 \n";
        break;

        case 15:
        cout << "You are eligible for Secondary 4 \n";
        break;

        default:
        cout << "Sorry, you are not eligible for any Secondary School Education \n";


    }



}
