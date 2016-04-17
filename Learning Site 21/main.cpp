#include <iostream>
#define _USE_MATH_DEFINES
#define M_PI
#include <math.h>
#include <cmath>
#include <string>
#include <cstdlib>
#include <float.h> //Characteristics of floating point types
#include <iomanip>

using namespace std;

int main()
{
    int x;
    long double pi = M_PI;

    cout << "State the precision of pi (Max: 49 digits) \n";
    cin >> x;
    cout << endl;
    cout << endl;


    cout << setprecision(x) << pi << endl;

    system("PAUSE");
}
