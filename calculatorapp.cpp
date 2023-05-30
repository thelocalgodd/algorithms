#include <iostream>
#include <fstream>

int main() {
  // Create and open a text file
  std::ofstream MyFile("journal.txt");

  // Write to the file
  MyFile << "Today is the greatest\n";
  MyFile << "Day I've ever known";

  // Close the file
  MyFile.close();
}
