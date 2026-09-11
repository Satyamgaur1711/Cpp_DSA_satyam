#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int marks[10] = {100000, 11, 23, 43, 26, 23, 45, 235, 23432, 465};
    // 10 size ka arry create ho jayge leking deta sirf itna fill kiya hai maine 
    for (int i = 0; i <= 9; i++)
    {
        cout << marks[i]<< endl;
    }
    cout << marks << endl;
    cout << sizeof(marks)<< endl;
    cout << sizeof(marks) / sizeof(int) << endl;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index_smallest = 0 , index_largest = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (marks[i] < smallest){
             smallest = marks[i];
             index_smallest = i;
        }
        if (marks[i] > largest){
            largest= marks[i];
            index_largest = i;
        }
    }
    
    cout << "smallest  value is " << smallest << endl;
    cout << "largest  value is " << largest<< endl;
    cout << "index of smallest is "<< index_smallest << endl;
    cout << "index of largest is "<< index_largest << endl;
}
