#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string text;
    ofstream MyFile("textfile.txt");

    cout << "enter text you want to write to the file";
    cin >> text;
    MyFile << text;

    MyFile.close();
}