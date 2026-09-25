#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 3, 3, 3,5, 5, 5, 5,55,5,5,5,5,5,5,5,5, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);


    int frequency = 0;
    int answer = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (answer == arr[i])
        {
            frequency++;
        }
        else{
            frequency--;
        }
        if (frequency ==0)
        {
            answer = arr[i];
        }
        
    }
    cout<< "majority element is  "  << answer << endl;
    
}
