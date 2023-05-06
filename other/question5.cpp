#include <iostream>
using namespace std;

int main() {
int number, i, odd = 0, even = 0;

cout << "input number: ";
cin >> number;

for (int i = 0; i <= number; i++) {
cout << "the numbers are " << i << " " <<endl;
    if (i % 2 == 0) {
        even += i;
    } else {
        odd += i;
    }
}
cout << "sum of the first " << number << " positive odd numbers is: " << odd <<endl;
cout << "sum of the first " << number << " positive even numbers is: " << even <<endl;
}