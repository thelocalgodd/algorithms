#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    double* numbers = new double[n];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

        double sum = 0.0;
    double mean = 0.0;
    double squared_diff_sum = 0.0;

    // Calculate the sum of numbers
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    // Calculate the mean
    mean = sum / n;

    // Calculate the sum of squared differences
    for (int i = 0; i < n; i++) {
        squared_diff_sum += pow(numbers[i] - mean, 2);
    }

    // Calculate the variance and standard deviation
    double variance = squared_diff_sum / n;
    double standard_deviation = sqrt(variance);

    std::cout << "Standard Deviation: " << standard_deviation << std::endl;

    delete[] numbers;

    return 0;
}