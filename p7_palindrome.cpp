#include <iostream>
using namespace std;

int main() {
    cout<<"NAME : GAUTAM KUMAR"<<endl;
    cout<<"ROLL : 22115028"<<endl;
    cout<<" "<<endl;
    int n, num, digit, rev = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    num = n;

    while (num!=0)
    {
        digit=num%10;
        rev = rev*10+digit;
        num/=10;
    }
    

    if (n == rev){
        cout << n << " is a palindrome number.";
        cout<<" "<<endl;
    }
    else{
        cout << n << " is not a palindrome number.";
        cout<<" "<<endl;
    }

    return 0;
}