// vector are dynamic in nature
// STL = stanterd template liberaty 

// vectore,  ques, stack, set are STL container.. 

// arry me length fix hoti hai but vector flaxible hota hai 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int>ve(4, 3); // 4 size hai and 3 har jagah store hoga.
    vec.push_back(12121);
    // vec.pop_back(); // yaha py last wale number delet ho jayegi... jo ke 12121 hai..

    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << endl;
    }
    for (int i: vec)
    {
        cout << i << endl;
    }
    cout << "the size of vector is " << sizeof(vec) << endl; // ye c++ ka fuction hai. isko sirf 3 pointers ke value mil rahi hai Start pointer: Data kahan se shuru ho raha hai.Finish pointer: Data kahan khatam ho raha hai. Capacity pointer: Total memory kahan tak allocate hui hai. 8x3
    cout << "The size of vectore is "<< vec.size() << endl; // its inbuild function of STL
    cout << "the back number is " << vec.back() << endl;
    cout << "the fornt number is "<< vec.front()<< endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vec.at(i) << endl;
    }
    return 0;
}