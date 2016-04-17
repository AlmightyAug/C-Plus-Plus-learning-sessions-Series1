#include "Augustine.h"
#include <iostream>

using namespace std;

Augustine::Augustine(int a, int b)
: RegVar(a),
constVar(b)
{
}

void Augustine::print(){
    cout << "Regular variable is: " << RegVar << ". \n";
    cout << "Constant Variable is: " << constVar << ". \n";
}
