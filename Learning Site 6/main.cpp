#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    float age;
    cout << "Please enter your age to see if you are eligible for driving! \n";
    cin >>age;

    float money;
    cout << "Please enter in the amount of money you would want to bid! \n";
    cin >>money;

    if (age>18 && money>50000){
        cout << "You can purchase this car!! \n";
    }else{
        cout << "Sorry, you are not eligible to buy this car! \n";

    }

}
