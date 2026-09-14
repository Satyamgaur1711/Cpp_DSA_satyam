#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {-2, 1, 5, 10, -3, 4, -1, 2, 1, -5, 4, -9, 1, 7, 2, -2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int current_sum = 0, max_sum = INT_MIN;

    int start_index = 0;
    int temp_start_index = 0;
    int end_index = 0;

    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];

        if(current_sum > max_sum){
            max_sum = current_sum;
            start_index = temp_start_index;
            end_index = i;
        }
        if(current_sum < 0){
            current_sum = 0;
            temp_start_index = i +1;
        }
    }
    cout << "starting index is " << start_index << endl;
    cout << "ending index is " << end_index << endl;

    cout << "[ ";
    for (int i = start_index; i < end_index; i++){
        cout  << arr[i] << " ";
    }
    cout << "]";

    cout << endl;
    cout<< max_sum << endl;
}
