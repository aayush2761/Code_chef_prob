#include <iostream>
using namespace std;

int main() {
   cout<<"NAME : GAUTAM KUMAR"<<endl;
   cout<<"ROLL : 22115028"<<endl;
   cout<<" "<<endl;

   int num, i;
   bool isPrime = true;

   cout << "NUMBER : ";
   cin >> num;

   // 0 and 1 are not prime numbers
   if (num == 0 || num == 1) {
      isPrime = false;}
   
   else {
      for (i = 2; i <= num / 2; ++i) {
         if (num % i == 0) {
            isPrime = false;
            break;
         }
      }
   }
     

   if (isPrime){
      cout << num << " : PRIME NUMBER";
      cout<<" "<<endl;
      cout<<" "<<endl;
   }
   else{
      cout << num << " : NOT PRIME NUMBER";
      cout<<" "<<endl;
      cout<<" "<<endl;
   }

   return 0;
}