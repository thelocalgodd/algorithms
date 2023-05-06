#include <iostream>
using namespace std;

int main() {
    int i, n, sum;
    
    cout << "enter number: ";
    cin >> n;
    
    sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }

    }
        cout << "sum is: " << sum << endl;
        
    if (sum == n) {
        cout << "number is perfect";
    } else if (sum > n) {
        cout << "number is abundant";
    } else {
        cout << "number is deficient";
    }
    
    return 0;
}