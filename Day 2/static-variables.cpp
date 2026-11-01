#include <iostream>
using namespace std;

inline int output(int a , int b){
    static int c = 0;      //This will execute once 
    c = c + 1;             //value of c is updated and now this value is remebered (retained) by the function
    return a*b + c;
}

int main(){
    int a , b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"The output is "<<output(a,b);
    return 0;
}