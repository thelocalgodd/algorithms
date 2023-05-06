#include <iostream>
using namespace std;

int main() {
    int credithour, roomtype, academic, matriculation, credithourfee, roomfee, totalfee, graduationfee, studentid;
    char graduation;

    academic = 500000, matriculation = 200000;  

    cout << "Fill in the following details. \n";
    cout << "Student's ID Number (4 digits) ", cin >> studentid;
    cout << "Credit Hours", cin >> credithour;
    cout << "Room Type (A / R) ", cin >> roomtype;
    cout << "Are you a graduating student? (Y / N) ", cin >> graduation;

    if (credithour < 15 || credithour > 21) {
        cout << "Credit Hours should be in the range of 15 and 21";
    
    system("pause");
    }
    
    credithourfee = credithour * 1000;

    if (graduation == 'Y') {
        int graduationfee = 300000;
    } else {
        graduationfee = 0;
    }

    if (roomtype = 'R') {
        roomfee = 500000;
    } else {
        roomfee = 1000000;
    }
     
    totalfee = credithourfee + academic + roomfee +  + matriculation + graduationfee;

    cout << "Total Fees are: GHS " << totalfee;

    system("pause");
}