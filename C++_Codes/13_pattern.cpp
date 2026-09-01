#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }


        for (int k = 1; k < i; k++)
        {
            if (i == 1)
            {
                break;
            }
            
            cout << i-k;
        }
        
        cout << endl;
    }





    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = i -1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
        
    }
    

    return 0;
    
}