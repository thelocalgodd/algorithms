#include <iostream>
#include <cmath>
using namespace std;

int value, option, optionsec, sum = 0, diff = 0, prod = 1, count, tempopt, lengthopt;
double kelvin, fahrenheit, length, temp, kilometres, centimetres;

void addition () {
    //addition function
 cout << "enter number of values: ", cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "enter number: ", cin >> value;
    sum += value;
    }
    cout << "Sum of Values is: " << sum;
    }

void subtraction () {
    cout << "enter number of values: ", cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "enter number: ";
        cin >> value;
    diff -= value;
    }

    cout << "Difference between the Values is: " << diff;
}

void multiplication () {
    cout << "enter number of values: ", cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "enter number: ";
        cin >> value;
    prod *=value; 
    }

    cout << "Product of Values is: " << prod;
}

void lengthconv () {
    cout << "enter length in metres: \n"; cin >> length;
    cout << "what would like to convert to? \n";
    cout << "convert metres to kilometres[1] or centimetres[2]: "; cin >> lengthopt;
        if (lengthopt == 1) {
            kilometres = length * 1000;
            cout << "length in kilometres is " << kilometres << "kilometres";
        } else if (lengthopt == 2) {
            centimetres = length * 0.01;
            cout << "length in centimetres is " << centimetres << "centimetres";
        } else {
            cout << "error";
            }
}


void tempconv () {
    cout << "enter temperature in degrees celcius: \n", cin >> temp;
                cout << "convert degrees celcius to degrees kelvin [1] or fahrenheit [2]\n";
                cout << "what would you like to convert degrees celcius to?: ", cin >> tempopt;
                    if (tempopt == 1) {
                        kelvin = temp + 273;
                        cout << "temperature in kelvin is: " << kelvin << "Kelvin";
                    } else if (tempopt == 2) {
                        fahrenheit = temp * (9/5) + 32;
                        cout << "temperature is fahrenheit is: " << fahrenheit << "Fahrenheit.";
                    } else {
                        cout << "error";
                    }
}

void conversions () {
        cout << "what conversion would you like to do?: \n";
    cout << "---------------------------------------\n";
    cout << "temperature [1], length [2]", cin >> optionsec;
        if(optionsec == 1) {
            //temperature conversion.
                tempconv();
            } else if (optionsec == 2) {
                //length conversion.
                lengthconv();
            } else {
                cout << "error";
            }
}


int main() {
    cout << "Calculator \n";
    cout << "-------------\n";
    cout << "What would you like to do?\n";
    cout << "----------------------------- \n";
    cout << "addition [1], subtraction [2], multiplication [3], conversions [4]", cin >> option;

    switch (option) {
    //addition
    case 1:
        addition();
    
    //subtraction
    case 2:
        subtraction();
        break;

    //multiplicaiton
    case 3:
        multiplication();
        break;

    case 4:
        conversions();
    default:
        break;
    }
            
    system("pause");
    return 0;
}