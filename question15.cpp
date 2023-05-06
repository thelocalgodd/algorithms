#include <iostream>
using namespace std;

int main() {
    int a, b, product=0;

    cout << "input the value of a: ", cin >> a;
    cout << "input the value of b: ", cin >> b;

    while (a != 0) {
        if (a % 2 != 0) {
            product += b;
        }
        a /= 2;
        b *= 2;
    }

    cout << "the product is: " << product;
}