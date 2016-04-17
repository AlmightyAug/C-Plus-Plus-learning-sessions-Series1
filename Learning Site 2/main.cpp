#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    float x;
    float xTotal = 0;
    float numberofExams = 0;

    cout << "Enter first result or -1 to compute \n";
    cin >> x;

    while (x!=-1){
        xTotal = xTotal + x;
        numberofExams++;

        cout << "Enter next result or -1 to compute \n";
        cin >> x;

    }

    cout << "Total number of papers taken is " << numberofExams << endl;
    cout << "Average result: " << xTotal/numberofExams;
}
