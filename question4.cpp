#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numbers, count, i, array[numbers];
    double mean, median, sum;

    sum = 0, count = 0;

    cout << "enter number of elements: ";
    cin >> count;

     for (int i = 0; i < count; i++)
    {
        cout << "enter number: ";
        cin >> numbers;
        sum += numbers;
    }

    //mean
    mean = sum / count;
    cout << "mean is: " << mean << endl;
    
    //median 
    if (count % 2 == 0)
    {
        median = count / 2;
    } else {
        median = count + 1 / 2;
    }

    cout << "median is the " << median ;
    
return 0;   
}