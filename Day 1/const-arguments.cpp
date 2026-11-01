#include <iostream>
using namespace std;

int amount(int principal , float interest = 1.05){
    return principal*interest;
}
int main(){
    int money = 100000;
    cout<<"Amount for normal people is "<<amount(money)<<endl;
    cout<<"Amount for VIP people is "<<amount(money , 1.1)<<endl;
    return 0;
}