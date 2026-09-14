#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {9,9,21,9,2,3,4,9,9,9,9,2,2,2,3,3,3,9,9,9,9,9,9,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int frequency = 0;
    for (int i: arr){
        for (int j = 0; j < n; j++){
            if(i=arr[j]){
                frequency ++;
            }
        }
        if (frequency >= n/2){
            cout << i << " is the majority element" << endl;
        }   
        break;
    }
}
// this is running but time complexity is n squar.. in next code fast way of solving of this program is avilable
