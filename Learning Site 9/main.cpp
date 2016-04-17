#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   cout << "We are going to calculate the volume of objects! \n";
   int l=1;
   int b=1;
   int h=1;
   cout << "Please enter the values of the object! In this format: (l,b,h)\n";
   cin >> l,b,h;
   cout << "the volume of this object is "<< l*b*h << endl;
}
