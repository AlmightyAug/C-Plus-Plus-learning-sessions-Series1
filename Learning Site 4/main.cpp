#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    float principleinvestment;
    cout << "Please enter your principle investment amount \n";
    cin >>principleinvestment;

    float rate;
    cout << "Please enter your interest rate \n";
    cin >>rate;

    double amount;

    for(int day =1; day <= 30; day++){
        amount = principleinvestment * pow(1+rate, day);
        amount = amount - principleinvestment;
        cout << day << "-----" << amount << endl;
    cout << "You would have earned " << amount << " dollars" << endl;
    }
}
