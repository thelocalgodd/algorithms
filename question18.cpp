#include <iostream>
using namespace std;

int main() {
    int fare, distance, newdistance;

    cout << "enter distance: ";
    cin >> distance; 
    newdistance = distance;

    if (distance <=10) {
        fare = 2000;            
    } else if (distance <= 40) {
        distance -= 10;
        fare = 2000 + distance * 100;
    } else if (distance <=150) {
        distance -= 40;
        fare += (30 * 100) + distance * 175;
    } else {
        fare += (30 * 100) + (110 * 175) + 50 * (distance - 150);
    }

    cout << "your expected fare for" << newdistance << "km is: " << fare;

    return 0;
}