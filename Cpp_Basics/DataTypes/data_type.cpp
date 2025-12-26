//   DataTypes

// 1. As explained in the Variables chapter, a variable in C++ must be a specified data type.
// 2. The data type specifies the size and type of information the variable will store.

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 6.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'D';         // Character
  bool myBoolean = true;       // Boolean
  string myString = "Hello Ali";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}

