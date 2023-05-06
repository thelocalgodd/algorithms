#include <iostream>
#include <cmath>
using namespace std;

int value, option, sum = 0, diff = 0, prod = 1, count;

int main() {
    cout << "Calculator \n";
    cout << "-------------\n";
    cout << "What would you like to do?\n";
    cout << "----------------------------- \n";
    cout << "addition [1], subtraction [2], multiplication [3]\n";
    cout << "-----------------------------------------------------\n";
    cin >> option;

    switch (option) {
    //addition
    case 1:
    cout << "enter number of values: ", cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "enter number: ";
        cin >> value;
    sum += value;
    }

    cout << "Sum of Values is: " << sum;
        break;
    
    //subtraction
    case 2:
    cout << "enter number of values: ", cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "enter number: ";
        cin >> value;
    diff -= value;
    }

    cout << "Difference between the Values is: " << diff;

    //multiplicaiton
    case 3:
    cout << "enter number of values: ", cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "enter number: ";
        cin >> value;
    prod *=value; 
    }

    cout << "Product of Values is: " << prod;

    default:
        break;
    }
    cin.get();
    return 0;
}

