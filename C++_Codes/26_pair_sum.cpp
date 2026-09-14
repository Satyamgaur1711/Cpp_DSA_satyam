#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {-2, 1, 5, 10, 3, 4, -1, 2, 1, -5, 4, -9, 1, 7, 2, -2};
    int target = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        for (int j = i + 1 ; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << i << " and " << j << " are he indices for target "<< endl;
            }
        } 
    }
    
}
// pair sum find 2 number jinke sum target ke barabar ho uski index print karni hai.
// Hear is the catch.. time complexity n^2 hai.. 