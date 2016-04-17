#include <iostream>

using namespace std;

int main()
{
    cout << "There are 4 (0,1,2,3) rows and 4 (0,1,2,3) columns \n";

    int x;
    cout << "Please enter in the row number \n";
    cin >> x ;

    int y;
    cout << "Please enter in the column number \n";
    cin >> y ;

    int Augustine [4][4] = {{879,345,735,10},{2,6,9,35},{6,8,2,56},{340,725,915,673}};

    // 879,345,735,10
    // 2,   6,  9, 35
    // 6,   8,  2, 56
    // 340,725,915,673

    cout << Augustine [x][y] << endl;
}
