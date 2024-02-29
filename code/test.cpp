#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream inFile;
   int number;

   // Open the input file
   inFile.open("input.txt");

   // Check if the file is open
   if (inFile.is_open()) {
       // Read the value of number from the input file
       inFile >> number;

       // Close the input file
       inFile.close();

       // Print the value of number
       cout << "Number: " << number << endl;

       // Update the value of number
       number += 10;

       // Open the output file
       ofstream outFile;
       outFile.open("input.txt");

       // Check if the file is open
       if (outFile.is_open()) {
           // Write the updated value of number to the output file
           outFile << number;

           // Close the output file
           outFile.close();
       }
   }

   return 0;
}