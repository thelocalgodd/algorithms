#include<iostream>
using namespace std;

int area, radius;
double pi = 3.142, volume;

void circle() {
    cout << "enter value of radius: ", cin >> radius;
    area = pi * radius * radius;
    cout << "area is: " << area;
}

void rectangle() {
    int length, breadth;
    cout << "enter length: ", cin >> length;
    cout << "enter breadth: ", cin >> breadth;
    area = length * breadth;
    cout << "area is: " << area;
} 

void square() {
    int length;
    cout << "enter length: ", cin >> length;
    area = length * length;
    cout << "area is: " << length;
}

void triangle() {
    int base, height;
    cout << "enter base length: ", cin >> base;
    cout << "enter height: ", cin >> height;
    area = 0.5 * base * height;
    cout << "area is: " << area;
}

void sphere() {
    cout << "enter radius", cin >> radius;
    volume = (4/3) * (pi * radius * radius);
    cout << "volume is: " << volume;
}

void cube() {
    int length;
    cout << "enter length of side: ", cin >> length;
    volume = length * length * length;
    cout << "volume is: " << volume;
}

void cuboid() {
    int length, height, breadth;
    cout << "enter length: ", cin >> length;
    cout << "enter breadth: ", cin >> breadth;
    cout << "enter height: ", cin >> height;
    volume = length * breadth * height;
}

void cylinder() {
    int height;
    cout << "enter height: ", cin >> height;
    cout << "enter radius: ", cin >> radius;
    volume = 2 * (pi * radius * radius) * height;
    cout << "volume is: " << volume;
}

int main() {
    int choice, option, operation;

    cout << "welcome, select your desired function: \n";
    cout << "select an option: ";
    cout << "[1]Area [2]Volume ";
    cin >> option;

        if (option == 1) {
            cout << "select an operation";
            cout << "[1]Circle[2]Rectangle[3]Square[4]Triangle";
            cin >> operation;

            switch (operation) {
            case 1:
                circle();
                break;
            case 2:
                rectangle();
                break;
            case 3: 
                square();
                break;
            case 4: 
                triangle();
                break;
            default:
                cout << "error. enter a valid option";
                break;
            }
        } else if (option == 2) {
            cout << "select an operation";
            cout << "[1]Sphere[2]Cube[3]Cuboid[4]Cylinder";
            cin >> operation;

            switch(operation) {
            case 1: 
                sphere();
                break;
            case 2:
                cube();
                break;
            case 3: 
                cuboid();
                break;
            case 4: 
                cylinder();
                break;
            default:
                cout << "error. enter a valid option";
                break;
            }
        } else {
            cout << "error. enter a valid option";
        }
system("pause");
} 