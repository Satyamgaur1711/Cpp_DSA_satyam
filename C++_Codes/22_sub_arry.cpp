#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    for (int i = 0; i < 6; i++){
        for (int j = i; j < 6; j++){
            for (int k = i; k <= j; k++){
                cout << arr[k] << " ";
            }
            cout << endl; 
        }
    }
}

// lets understand... Hear we have a arry. we are setting starting and ending points and prining all integer between starting and ending point.