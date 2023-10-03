#include <iostream>
using namespace std;

int main() {

    cout<<"NAME : GAUTAM KUMAR"<<endl;
    cout<<"ROLL : 22115028"<<endl;
    cout<<" "<<endl;
    int n, first = 0, second = 1, next;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << ":\n";

    while (first <= n) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}