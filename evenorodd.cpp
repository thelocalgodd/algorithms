#include<iostream>
using namespace std;

int main() {
    int value;
    
    cout << "enter value: ";
    cin >> value;

while (value > 0) {
    if (value % 2 == 0) {
        cout << "number is even";
    } else {
        cout << "number is odd";
    }
}
return 0;
}