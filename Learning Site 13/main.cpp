#include <iostream>

using namespace std;

int main()
{
    int Augustine [10] = {98,72,58,17,3,74,91,46,57,83};

    cout << "Element - Value" << endl;

    for (int x = 0; x<9;  x++){
        Augustine[x] = 99;

        cout << x << " ----- " << Augustine[x] << endl;

    }
}
