#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter you value to A";
    cin >> a;
    cout << "Enter you value to b";
    cin >> b;
    cout << ("this is your bitwise and operatior") << (a & b) << endl;
    // 0 and 0 = 0
    // 0 and 1 = 0
    // 1 and 0 = 0
    // 1 and 1 = 1
    cout << "This is your bitwise or operator" << (a | b) << endl;
    // 0 and 0 = 0
    // 0 and 1 = 1
    // 1 and 0 = 1
    // 1 and 1 = 1
    cout << "This is your bitwise exor operator" << (a^b) << endl;
    // 0 and 0 = 0
    // 0 and 1 = 1
    // 1 and 0 = 1
    // 1 and 1 = 0

    // hear all this operatior are operating on binary number

    cout << "this is left shift opator" << (a<<6) << endl;
    // iska final answer a*(2 to the power 6)
    cout << "this is left shift opator" << (b<<4) << endl;
    // same hear a*(2 to the power 4)
    cout << "this is left shift opator" << (b>>1) << endl;
    // iska final answer b/(2 to the power 1)
    cout << "this is left shift opator" << (b>>2) << endl;
     // same hear b/(2 to the power 2)
}

