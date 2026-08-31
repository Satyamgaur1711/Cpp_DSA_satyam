#include <iostream>
using namespace std;

int main()
{
    int x = 54;
    float F = 35.5f;
    bool status = true;
    char c = 'a';
    double D = 458.99;
    // these are the premitive date types. non premitive deta types are arry string.
    // There are two types of deta conversion. i inplicit and explicit. 
    // small size deta to big size deta me change karna implicit
    // big size deta of samll size deta me change karna explicit.
    int newvalue = (int)D;
    cout << newvalue << endl;  // it is called explicit type convesion;

    int integer = (int)c;
    cout << integer << endl;
    



    return 0;
}
