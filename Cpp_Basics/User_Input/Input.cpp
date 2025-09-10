#include <iostream>
using namespace std;

int main(){
    /*
        cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
        cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)
    */

    int x;
    cout<<"Type a num:";
    cin>>x;  //  Get user input from the keyboard
    cout<<"Your num is: "<<x<<endl;
    
        // More Practice
    string y;
    cout<<"Type Your good name:";
    cin>>y;
    cout<<"Your name is "<<y;
    return 0;
}