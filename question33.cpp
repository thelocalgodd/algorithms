#include <iostream>
using namespace std;

int main () {
    
    int day, network, time, length, cost;

    cout << "enter day of the week (1 - 7 represents monday - sunday): ";
    cin >> day;
    cout << "enter network type (1-3 represents same, different and international network): ";
    cin >> network;
    cout << "enter time (enter four digit value in 24 hour format): ";
    cin >> time;
    cout << "enter length of call (in minutes): ";
    cin >> length;

//between 0700 and 1900, Monday to Friday
    while (time >= 0700 && time <= 1900) {  //from 7am to 7pm
        while (day > 0 && day < 6) {        //days 1 to 5 (monday to friday)
            if (network == 1) {
                cost = length * 1200;
            } else if (network == 2) {
                cost = length * 2400;
            } else if (network == 3) {
                cost = length * 8200;
            } else {
                cout << "error";
            }  
        }   
    }
    
//before 0700 and after 1900, Monday to Friday
    while (time > 1900 && time < 0700 ) {     // before 7am and after 7pm
        while (day > 0 && day < 6) {        // days 1 to 5 (monday to friday)
            if (network == 1) {
                cost = length * 800;
            } else if (network == 2) {
                cost = length * 1400;
            } else if (network == 3) {
                cost = length * 5200;
            } else {
                cout << "error";
            }
        }      
    }
    
//Saturday and Sunday
    while (day > 5 && day < 8) {           //days 6 and 7 (saturday, sunday) 
        if (network == 1) {
            cost = 0;
        } else if (network == 2) {
            cost = length * 600;
        } else if (network == 3) {
            cost = length * 4000;
        } else {
            cout << "error";
        }
    }

//Show total cost
    cout << "your total cost is: GHS " << cost;
    return 0;
}