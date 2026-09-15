#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {1,2,3,5,6,7,8,9,10,11,12,14,18,22,25};
    int target = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j = n-1;
    
    while (i<j)
    {
        int sum = arr[i]+arr[j];

        if(sum < target){
            i++;
        }
        if (sum> target){
            j--;
        }
        if (sum == target){
            cout << i << " and " << j << " are he indices for target "<< endl;
            i++;
            j--;
        }
    }
}
// pair sum find 2 number jinke sum target ke barabar ho uski index print karni hai.
