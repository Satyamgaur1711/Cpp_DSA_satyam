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
    while (binarorm_n>0.2)
    {
        if (binarorm_n%2==1){
            answer = answer*x;
        }
        binarorm_n = binarorm_n/2;
        x = x*x;
        
    }
    cout << answer << endl;
}

// # Documentation of this program  

// base lo fir power input lo  use baad ower ka binary number ke help se base ke squeres ke series ke saath rakho.
// agar base%2 = 0 hai to answer me koi change na karo agar 0 nahi hai to anser me X ke value se mulitply karodo jo biary number ke help se series ke tarah bah rahi hai 

// x^1 x^2 x^4 x^8 aishe ksarke binary ke saath badh rahi hai 