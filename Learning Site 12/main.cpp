#include <iostream>

using namespace std;

int factorialFinder(int x){
    if(x==1){
        return 1;
    }else{
        return x*factorialFinder(x-1);
    }
}

int main()
{
    cout << "Calculating Factorials \n";
    int x;
    cout << "Please enter in an integer \n";
    cin >> x;

    cout << "Your answer is " << factorialFinder(x) << endl;
}
