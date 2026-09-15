#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 3, 3, 3,5, 5, 5, 5,55,5,5,5,5,5,5,5,5, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);


    int max_frequency = 0;
    int current_frequency = 1;
    int max_element;

    for (int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            current_frequency++;
            if (current_frequency> max_frequency){
                max_frequency = current_frequency;
            }
            
        }
        else{
            current_frequency = 1;
        }
        if (max_frequency > n/2)
        {
            max_element = arr[i];
        }
    }
    cout<< "majority element is  "  << max_element << "  with frequency of  " << max_frequency << endl;
    
}
