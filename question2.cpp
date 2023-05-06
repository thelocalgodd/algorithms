#include <iostream>
using namespace std;

int main() {
    
    int x, y;

//enter the values of x and y
    cout << "input the value of x ";
    cin >> x;
    cout << "input the value of y ";
    cin >> y;

//interchange the values of x and y

    int temp = x;
    x = y;
    y = temp;
    
    cout << "x = " << x << "\n" << "y = " << y;

    return 0;
}