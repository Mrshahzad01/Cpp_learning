# include <iostream>
using namespace std;

int main(){
    // Constants
    /*
    When you do not want others (or yourself) to change existing variable values, use the const keyword
    (this will declare the variable as "constant", which means unchangeable and read-only):
    */

    // Example:
    const int my_num = 14;  // // myNum will always be 14
    // my_num = 12   // error: assignment of read-only variable 'myNum'
    cout<<my_num;
    return 0;
}