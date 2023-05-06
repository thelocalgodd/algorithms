#include <iostream>
using namespace std;

int main() {
int n, i, odd = 0, even = 0;

cout << "input number: ";
cin >> n;


cout << "the numbers are " << i << " " <<endl;
    if (i > 0) {
        even = n * (n + 1);
        odd = n * n;
    }

cout << "sum of the first " << n << " positive odd numbers is: " << odd <<endl;
cout << "sum of the first " << n << " positive even numbers is: " << even <<endl;

return 0;
}