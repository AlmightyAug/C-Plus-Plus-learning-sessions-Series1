#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void printNumber(int x){
    cout << "I am printing an integer" << x << endl;
}

void printNumber(float x){
    cout << "Now, I am printing a float" << x << endl;
}
int main()
{
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);
}
