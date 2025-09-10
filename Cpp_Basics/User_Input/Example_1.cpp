//  Creating a Simple Calculator

#include <iostream>
using namespace std;

int main(){
    int x ,y;
    int sum,mult;
    cout<<"Inter 1st num: ";
    cin>>x;
    cout<<"Inter 2nd num: ";
    cin>>y;
    sum = x + y;
    cout<<"Your Sum is: "<<sum<<endl;
    mult = x*y;
    cout<<"Your multiplication is: "<<mult<<endl;
    return 0;
}