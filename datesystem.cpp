#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    string dayname, monthname, date;
    cout << "enter day: ", cin >> day;
    cout << "enter month: ", cin >> month;
    cout << "enter year: ", cin >> year;

    if (day < 1 || day > 31) {
        cout << "enter valid day.";
    }
    if (month < 1  || month > 12) {
        cout << "enter valid month.";
    }
    if (year < 1 || year > 9999) {
        cout << "enter valid year.";
    }

    if (day == 1 || day == 21 || day == 31) {
        dayname = "st";
    } 
    if (day == 2 || day == 22) {
        dayname = "nd";
    } 
    if (day == 3 || day == 23) {
        dayname = "rd";
    }
    if (day > 3 && day < 21 || day > 23 && day < 31) {
        dayname = "th";
    }

    if (month == 1) {
        monthname = "January";
    } else if (month == 2) {
        monthname = "February";
    } else if (month == 3) {
        monthname = "March";
    } else if (month == 4) {
        monthname = "April";
    } else if (month == 5) {
        monthname = "May";
    } else if (month == 6) {
        monthname = "June";
    } else if (month == 7) {
        monthname = "July";
    } else if (month == 8) {
        monthname = "August";
    } else if (month == 9) {
        monthname = "September";
    } else if (month == 10) {
        monthname = "October";
    } else if (month == 11) {
        monthname = "November";
    } else if (month == 12) {
        monthname = "December";
    }
    
    cout << "The date is: " << day << dayname << " " << monthname << " " << year;

    return 0;
}