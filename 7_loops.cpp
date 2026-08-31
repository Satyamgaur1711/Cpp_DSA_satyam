#include <iostream>
using namespace std;

int main(){
    int n = 1;
    while (n<=1000000)
    {
        cout << n << endl;
        n = n + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "multible of 2 is %d", i*2 << endl;
    }
    

    return 0;
}