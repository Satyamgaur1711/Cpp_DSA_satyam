#include <iostream>
using namespace std;

int main()
{
    cout << "enter a number of which you want square \n" << endl;
    int n;
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n-1)-i; j++)
        {
            cout << " ";
        }
        cout << "*";

        for (int j = (2*i)-1; j > 0; j--)
        {
            cout << " ";
        }
        if(i != 0){

            cout << "*";
        }
        cout << endl;
    }


    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < (i+1); j++)
        {
            cout << " ";
        }
        cout << "*";

        for (int  j = 0; j < 2*(n-i-2) -1 ; j++)
        {
            cout << " ";
        }
        if(i != n-2){

            cout << "*";
        }

        cout << endl;

        
    }
    
    

    return 0;
    
}