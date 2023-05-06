#include <iostream>
using namespace std;

int main() {
    int number, factor;

    factor = 0;

    cout << "enter number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)  {
        if (number % i == 0) {
            factor += 1;
        }
    }

cout << "number of factors is: " << factor << endl; 

    if (factor == 2)
    {
        cout << "number is prime" << endl;
    } else {
        cout << "number is not prime" << endl;
    }
system("pause");
}