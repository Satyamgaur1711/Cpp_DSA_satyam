// kadans algorithm's

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4, -9, 1, 7, -2};

    int current_sum = 0, max_sum = INT_MIN;
    for (int i = 0; i < 13; i++)
    {
        current_sum += arr[i];
        max_sum = max(current_sum, max_sum);
        if(current_sum < 0);
        current_sum = 0;
    }
    cout<< max_sum << endl;
}

// main point is sum_arry must me continuous. isi baat py jyda jor dena hai, arry discontinuous nahi ho sakti. code ko dhayan se padho aishe samjha nahi sakta lekin samjhande ke koshish karta hu.
// current sum index wise sum karta jayega. jaishe usko negative value mili wo 0 ho jayega kyuke negative add karna bewkufi hogi. or har index add karne ke baad max sum se check karga.