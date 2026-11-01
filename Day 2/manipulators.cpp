#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // Manipulators
    int a = 3, b = 23 , c = 233 , d = 2333;
    cout<<"The value of a without setw is:"<<a<<endl;
    cout<<"The value of b without setw is:"<<b<<endl;
    cout<<"The value of c without setw is:"<<c<<endl;
    cout<<"The value of d without setw is:"<<d<<endl;

    cout<<"The value of a with setw is:"<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is:"<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;
    cout<<"The value of d with setw is:"<<setw(4)<<d<<endl;

    // Constants 
    // usually
    int x = 5;
    cout<<"The value of a was: "<<x<<endl;
    x = 20;
    cout<<"The value of a is: "<<x<<endl;
    // this way value can be updated whenever required
    const int y = 20;
    cout<<"Value of y is: "<<y<<endl;
    // value cannot be updated now
    return 0;
}