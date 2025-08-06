// ------------------ First Program in C++ ------------------

// This header file library allows us to use input/output objects
// such as 'cout' for printing output to the screen.
#include <iostream>    

// This line means: "use the standard namespace"
// It lets us write 'cout' instead of 'std::cout'.
using namespace std;   

// The main function - execution of the program starts here
int main() {

    // Display "Hello World!" on the screen
    // '<<' is the stream insertion operator (sends data to output stream)
    // 'endl' is used to end the line and move the cursor to the next line
    cout << "Hello World!" << endl;  

    // Return 0 means program ended successfully
    return 0;  
}


//---------------Comments in C++-----------------

/*
Comments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution 
when testing alternative code.Comments can be singled-lined or multi-lined.

1) Single-line comments start with two forward slashes (//).
2) Multi-line comments start with /* 
and end with */


