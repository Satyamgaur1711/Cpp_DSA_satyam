#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr = {11,9,6,8,9,19,25,5,2,13,100};

    int maxprfit = 0;
    int bestby = arr[0];
    for (int i: arr)
    {
        if (i<bestby)
        {
            bestby = i;
        }
        maxprfit = max(maxprfit, i- bestby);
    }
    cout << maxprfit << endl;
}

