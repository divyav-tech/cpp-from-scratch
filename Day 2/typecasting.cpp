#include <iostream>
using namespace std;

int c = 40;

int main()
{
    int a, b;

    cout << "Scope Resolution Operator:\n";
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    int c = a + b;
    cout << "Sum (stored in local variable c) is " << c << endl; // Local Variable
    cout << "Global Variable c is " << ::c << endl;              // :: is Scope Resolution Operator
    cout << endl;

    float d = 12.5f;
    long double e = 12.5l; // f and l are used here to specify values are float and long double respectively otherwise by default they will be treated as double
    cout << "The value of d is " << d << " and the value of e is " << e << endl;

    cout << "The size of 12.5 is " << sizeof(12.5) << endl;
    cout << "The size of 12.5l is " << sizeof(12.5l) << endl;
    cout << "The size of 12.5L is " << sizeof(12.5L) << endl;
    cout << "The size of 12.5f is " << sizeof(12.5f) << endl;
    cout << "The size of 12.5F is " << sizeof(12.5F) << endl;
    cout << endl;

    // Reference Variables
    float x = 300;
    float &y = x;

    cout << x <<endl;
    cout << y << endl;

    // Typecasting
    int i = 45;
    float j = 50.67;
    cout << "The value of z is " << (float)i <<endl;
    cout << "The value of z is " << (int)j <<endl;
    
    return 0;
}