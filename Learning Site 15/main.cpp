#include <iostream>

using namespace std;

int main()
{
    double a;
    cout << "Enter in a1 \n";
    cin >> a;
    cout << endl;

    double b;
    cout << "Enter in a2 \n";
    cin >> b;
    cout << endl;

    double c;
    cout << "Enter in a3 \n";
    cin >> c;
    cout << endl;

    double d;
    cout << "Enter in a4 \n";
    cin >> d;
    cout << endl;

    double e;
    cout << "Enter in b1 \n";
    cin >> e;
    cout << endl;

    double f;
    cout << "Enter in b2 \n";
    cin >> f;
    cout << endl;

    double g;
    cout << "Enter in b3 \n";
    cin >> g;
    cout << endl;

    double h;
    cout << "Enter in b4 \n";
    cin >> h;
    cout << endl;

    int x;
    cout << "Please enter row number here \n";
    cin >> x;

    int y;
    cout << "Please enter column number here \n";
    cin >> y;

    int Augustine[4][4] = {{a,b,c,d}, {e,f,g,h}};

    for (int row=0; row<2; row++){

        for(int column = 0; column <2; column++){
            cout << Augustine [row][column] << "  ";
        }

        cout<<endl;
    }
}
