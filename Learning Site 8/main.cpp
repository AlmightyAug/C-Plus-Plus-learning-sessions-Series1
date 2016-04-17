#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float volume;
    cout << "We are calculating the volume of objects in cm^3\n";
    float length;
    float breadth;
    float height;
    cout << "Please enter in the length \n";
    cin >>length;
    cout << "Please enter in the breadth \n";
    cin >> breadth;
    cout << "Please enter in the height \n";
    cin >> height;

    volume = length * breadth * height;

    cout << "The volume of this object is " << volume << " cm^3" << endl;
}
