#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int distance, yards, feet;
    double miles;

    // 1 mile = 1760 yards
    // 1 mile =  3 feet
    //accept input in feet and display miles, yards and feet

    cout << "enter distance in feet: ";
    cin >> distance;

    miles = distance / 5280;
    yards = (distance / 5280) % 5280;
    feet = yards % (distance / 5280);

    cout << "the distance is: " << miles << "miles, " << yards << "yards, " << "and " << feet << "feet.";

    return 0; 
}