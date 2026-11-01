#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter a number: "; // << is called Insertion Operator
    cin >> num1;                //>> is called Extraction Operator

    cout << "Enter Another Number: ";
    cin >> num2;

    cout << "The sum is " << num1 + num2;
    return 0;
}