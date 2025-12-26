/*
The auto keyword automatically detects the type of a variable based on the value you assign to it.
It helps you write cleaner code and avoid repeating types, especially for long or complex types.
For example: Instead of writing int x = 5;, you can write:
*/

#include <iostream>
using namespace std;
 
int main () {
  auto x = 5 ,z = 12;   // x is automatically treated as int   
  cout << x + z;
  return 0;
}