#include <iostream>

using namespace std;

int main()
{
    int Augustine [10];
    int *Aug0 = &Augustine[0];
    int *Aug1 = &Augustine[1];
    int *Aug2 = &Augustine[2];

    cout << "Aug0 is at " << Aug0  << endl;
    cout << "Aug1 is at " << Aug1  << endl;
    cout << "Aug2 is at " << Aug2  << endl;

    Aug0 ++ ;
    cout << "Aug0 is now at " << Aug0 << endl;
}
