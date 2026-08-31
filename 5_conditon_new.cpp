#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the alphabet A to Z in any form, samll letter and capital letter" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "The entered letter is in small letter" << endl;
        
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The entered letter is in capital letter" << endl;
    }
    else{
        cout << "madharchod A to Z enter kar small and large letter me" << endl;
    }
}


// We will do it with the help so scaii value 