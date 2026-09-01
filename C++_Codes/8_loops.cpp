#include <iostream>
using namespace std;

int main()
{
    cout << "Entet a number N" << endl;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;


    // now ham n tak odd numbers ka sum print parengye.
    int sum_even = 0;
    int sum_odd = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i%2 == 0)
        {
            sum_even = sum_even + i;
        }
        if(i%2 != 0)
        {
            sum_odd = sum_odd + i;
        }
        
    }

    // odd ka formula hota hai n^2 n = number of terms. nake n tak.
    
    
    cout << "The sum of odd number till N is " << sum_odd << endl;
    cout << "The sum of even number till N is " << sum_even << endl;
    
}