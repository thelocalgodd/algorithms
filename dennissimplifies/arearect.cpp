#include<iostream>
using namespace std;

int width, length, area;

int main() {
    cout << "this is to calculate the length of a rectangle";
    cout << "enter width of the rectangle: ";
    cin >> width;
    cout << "enter length of the rectangle: ";
    cin >> length;

    area = width * length;

    cout << "the area of the rectangle is: " << area;
    
    cin.get();
}