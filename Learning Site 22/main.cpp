#include <iostream>
#define _USE_MATH_DEFINES
#define M_E
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
    long double e = M_E;

    cout << "State the precision of e (Max: 53 digits) \n";
    cin >> x;
    cout << endl;
    cout << endl;

    cout << setprecision(x) << e << endl;

    system("PAUSE");
}
