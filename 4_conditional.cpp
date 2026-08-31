#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number:  " << endl;
    cin >> n;
    if (n < 133)
    {
        cout << "Enter number is less then 133" << endl;
    }
    else{
        cout << "entered number is greater then 133" << endl;
    }
    
    cout << "Enter the age:  " << endl;

    int age;
    cin >> age;
    if (age <= 18)
    {
        cout << "you are eligible for voating" << endl;
    }
    else{
        cout << "you are not eligble for voating" << endl;
    }
    
    int marks;
    cout << "Enter you Parcentage in you bord exam"<< endl;
    cin >> marks;
    if (marks <= 100 && marks > 90)
    {
        cout << "you got Grade A" << endl;
    }
    else if (marks < 90 && marks > 80)
    {
        cout << "you got Grade B" << endl;
    }
    else if (marks < 80 && marks > 70)
    {
        cout << "you got gread C" << endl;
    }
    else if (marks < 70 && marks > 48)
    {
        cout << "you are just pass the exam" << endl;
    }
    else if(marks < 45 && marks > 0){
        cout << "you are fail in the exam" << endl;
    }
    else{
        cout << "chutiya Madharchod Marks ka parcentage pucha hai BKL" << endl;
    }
    
    
}