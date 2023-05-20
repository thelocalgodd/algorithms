#include<iostream>
using namespace std;

int main() {
    int a, b;

    if(a > b) {
        if (a % b == 0) {
            cout << "b is a factor of a";
        } else {
            cout << "b is not a factor of a";
        }
    } else if (b > a) {
        if (b % a == 0) {
            cout << "a is a factor of b";
        } else {
            cout << "a is not a factor of b";
        }
    } else {
        cout << "a is equal to b";
    }
return 0;
}