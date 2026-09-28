#include<iostream>
using namespace std;

// welcome to binary exponentiation

int main()
{
    int x , n;
    cout << "Enter your base x"<< endl;
    cin >> x;
    cout << "Enter you power n" << endl;
    cin >> n;

    long long answer = 1;
    int binarorm_n = n;
    while (binarorm_n>0)
    {
        if (binarorm_n%2==1){
            answer = answer*x;
        }
        binarorm_n = binarorm_n/2;
        x = x*x;
        
    }
    cout << answer << endl;
}