#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,4,6,8,9,15,65,48,19,25,5,2,13,99};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<< arr[i] << endl;
    }
    
}
