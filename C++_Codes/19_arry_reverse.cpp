#include<iostream>
using namespace std;

int main(){
    int arry[] = {10, 20, 45, 65, 18, 16, 45, 65, 952, 145, 544,  10000};
    for (int i = 0; i < 6; i++)
    {
        int x = arry[i];
        arry[i] = arry[11-i];
        arry[11-i]= x;
    }
    for (int i = 0; i < 12; i++)
    {
        cout << arry[i] << endl;
    }
    
}