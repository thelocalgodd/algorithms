#include <iostream>
using namespace std;

int main() {
    double regularrate, overtimerate, hoursworked, children, nhis;
    double grosspay, tax, netpay, deductions, socialsecurity, consttax, welfare;

    regularrate = 25000;
    overtimerate = 1.5 * regularrate;

    cout << "enter number of hours worked: ";
    cin >> hoursworked;
    cout << "enter number of children: ";
    cin >> children;
    
    if (hoursworked <= 40) {
        grosspay = hoursworked * regularrate;
    } else {
        grosspay = (hoursworked * regularrate) + ((hoursworked - 40) * overtimerate);
    }
    
    if (grosspay < 125,001) {
        tax = 0;
    } else if (grosspay >= 125001 && grosspay <=250000) {
        tax = 0.05 * grosspay;
    } else if (grosspay >= 250001 && grosspay <= 1750000) {
        tax = 0.1 * grosspay;
    } else if (grosspay >= 1750001 && grosspay <= 2750000) {
        tax = 0.15 * grosspay;
    } else if (grosspay >= 2750001 && grosspay <= 5000000) {
        tax = 0.2 * grosspay;
    } else {
        tax = 0.3 * grosspay;
    }

    socialsecurity = 0.06 * grosspay;
    consttax = 0.03 * grosspay;
    welfare = 0.02 * grosspay;

    if (children > 3) {
        nhis = (children - 3) * 5000;
    }

    deductions = socialsecurity + consttax + welfare + nhis + tax;
    netpay = grosspay - netpay;

    cout << "gross pay is: GHS " << grosspay << endl;
    cout << "national tax is: GHS " << tax << endl;
    cout << "social security payment is: GHS " << socialsecurity << endl;
    cout << "constituency tax is: GHS " << consttax << endl;
    cout << "welfare contribution is: GHS " << welfare << endl;
    cout << "nhis payment is: GHS " << nhis << endl;
    cout << "net pay is: GHS" << netpay << endl;

    return 0;
}