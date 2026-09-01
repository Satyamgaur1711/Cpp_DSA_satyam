#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number till you want prime number" << endl;
    int n;
    cin >> n;

    for (int i = 2; i <=  n; i++)
    {
        bool prime = true;
        for (int j = 2; j*j <= i; j++)
        {
            if (i%j == 0)
            {
                prime = false;
                break;
            }
            
        }


        if (prime)
        {
            cout << i << endl;
        }
        
        
    }
    
}