// static memory alloted at compilare run time..
// dynamic memory are aloted at run time..
// thats why vectoar are use the are dynamic

// statac memory stack me allot hoti hai 
// dyanmic memory heap me allot hogti hai 

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(15);
    vec.push_back(160);
    cout << vec.size()<< endl;
    cout << vec.capacity()<< endl;


}