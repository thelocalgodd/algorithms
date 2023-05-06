#include <iostream>
using namespace std;

int main() {
int population = 2000;
int goal = 2000000;
double increment = 300; // population increases by 300
double time = 0.5;      // every 6 months (0.5 of a year)

for (population; population <= 2000000; population + increment) {
        population += population;
        time += 0.5;
    }
cout << "population is: " << population << endl;
cout << "Brofoyedur will be a city in " << time << " years. \n";

system("pause");
}
