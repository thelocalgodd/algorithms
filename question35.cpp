#include <iostream>
using namespace std;

int main() {
int depreciation;
int value, duration, year, sum=0;

cout << "input value of asset: ";
cin >> value;
cout << "input number of years of depreciation: ";
cin >> duration;

//sum of the years
for (int i = 0; i <= duration; i++) {
    sum += i;
}
cout << "sum of years' digits is: " << sum <<endl;

for (year=0; year<=duration; year++){
    depreciation = ((duration-year) * value) / sum;
    cout << "depreciation for year " << year << " is: " << depreciation <<endl; 
}}