#include <iostream>
using namespace std;

int main()
{
    cout << "enter a number for star pattern" << endl;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    // floid pattern
    int number = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }



   for (int i = 1; i <= n; i++)
   {

    for (int j = 0; j < i; j++)
    {
        cout << " ";
    }

    for (int j = 0; j < n - i ; j++)
    {
        cout << i;
    }
    cout << endl;
    
   }
   

    return 0;
}

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********
// ***********
// ************
// *************
// **************

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
// 7 7 7 7 7 7 7
// 8 8 8 8 8 8 8 8
// 9 9 9 9 9 9 9 9 9
// 10 10 10 10 10 10 10 10 10 10
// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789
// 12345678910

// 0
// 1 2
// 3 4 5
// 6 7 8 9
// 10 11 12 13 14
// 15 16 17 18 19 20
// 21 22 23 24 25 26 27
// 28 29 30 31 32 33 34 35
// 36 37 38 39 40 41 42 43 44

// 10 10 10 10 10 10 10 10 10 10
// 9 9 9 9 9 9 9 9 9
// 8 8 8 8 8 8 8 8
// 7 7 7 7 7 7 7
// 6 6 6 6 6 6
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1
