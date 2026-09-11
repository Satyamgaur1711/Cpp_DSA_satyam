#include<iostream>
using namespace std;

int main(){
    // in int detatype we only store limited deta. (-2^31) to (2^31 -1) tak he store kar sakty hai
    // kyuke posive number zero se start hoty hai.
    int a;
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    // output me byts print hogi..
    cout << sizeof(short int) << endl;
    // int are by defalt signed..
    // ther are some unsigned deta..
    // signed me deta ka + - signed hoty hai. unsigned me MSP bhi khali rahati haideta store karne ke liye.
}