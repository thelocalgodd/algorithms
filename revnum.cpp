#include <iostream>
using namespace std;

int main() {

int Number, revNum = 0, lastDigit;

cout << "Enter a number: ";
cin >> Number;

while (Number != 0) {
lastDigit = Number % 10;
revNum = (revNum * 10) + lastDigit;
Number /= 10;
}

cout << "Reversed: " << revNum << endl;

system("pause>0");
return 0;
}
