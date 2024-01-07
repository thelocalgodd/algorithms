// Interchange values without an extra variable

#include <iostream>
using namespace std;

int x, y;

int main()
{
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    x = x + y;
    y = x - y;
    x = x - y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    system("pause");
}
