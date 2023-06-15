#include<iostream>
#include <cmath>

using namespace std;

int main() {

int regularrate, hoursworked, noofchildren;
double grosspay, overtimerate, incometax, nhil, districtax, edufund, netpay;

regularrate = 5;
overtimerate = 1.5 * regularrate;

cout << "enter number of hours worked";
cin >> hoursworked;

cout << "enter number of children";
cin >> noofchildren;

if (hoursworked <= 40) {
    grosspay = regularrate * hoursworked;
} else {
    grosspay = regularrate * hoursworked + overtimerate * (hoursworked - 40);
}

incometax = 0.15 * grosspay;
nhil = 0.025 * grosspay;
districtax = 0.01 * grosspay;

if (noofchildren > 3) {
    edufund = 0.5 * (noofchildren - 3);
} else {
    edufund = 0;
}

netpay = grosspay - (incometax + nhil + districtax + edufund);

cout << "the net pay is GHS" << netpay;

}