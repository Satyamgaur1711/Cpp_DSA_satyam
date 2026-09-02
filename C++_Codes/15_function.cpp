#include <iostream>
using namespace std;



void prn(){
    cout << "my name is satyam gaur \n";
}

int sum(int a, int b){
    int x = a + b;
    return x;
}

int suntillN(int n)
{
    return (n*(n+1))/2;
}


int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int sumofdigit(int n ){
    int digisum  = 0;
    while (n > 0)
    {
        int lastdigit = n%10;
        n = n/10;
        digisum = digisum + lastdigit;

    }
    return digisum;    
}


int bionomial(int n, int r){
    int x = factorial(n);
    int y = factorial(r);
    int z = factorial(n-r);
    return x/(y*z);
}

int main()
{

    prn();


    int s = sum(5, 15);
    cout << s << "\n";


    int S_number = suntillN(100);
    cout << S_number << endl;

    int fact = factorial(5);
    cout << fact << endl;

    int numbersum = sumofdigit(123456);
    cout << numbersum << endl;
    

    int BC = bionomial(10, 6);
    cout << BC << endl;


}