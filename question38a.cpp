#include <iostream>
using namespace std;

int main() {
    double n,x,y,a,b, sumx=0, sumy=0, sumxx=0, sumxy=0;

    cout << "enter number of values: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        cout << "enter value of x: ";
        cin >> x;
        cout << "enter value of y: ";
        cin >> y;

        sumx += x;
        sumy += y;
        sumxx += x*x;
        sumxy += x*y;
    }

    a = (sumy - sumx) / n;
    b = (sumxy - (sumx * sumy) / n) / (sumxx - (sumx * sumx)) / n;

    cout << "equation of the line is y=" << a << "x+" << b;

    return 0;
}