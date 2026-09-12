#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int max_sum = INT_MIN;
    int sum = 0;

    
    int arr[] = {5, 4, -10, -10, 15, 14};

    
    for (int i = 0; i < sizeof(arr)/4; i++){
        int c_sum = 0;
        for (int j = i; j < sizeof(arr)/4; j++){
            c_sum += arr[j];
            max_sum = max(c_sum, max_sum);
        }
    }

    cout << max_sum << endl;
}