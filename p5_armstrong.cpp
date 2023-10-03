#include <iostream>
#include <cmath>
using namespace std;

int main() {
   cout<<"NAME : GAUTAM KUMAR"<<endl;
   cout<<"ROLL : 22115028"<<endl;
   cout<<" "<<endl;
   int num, originalNum, remainder, result = 0, n = 0;

   cout << "Enter a positive integer: ";
   cin >> num;

   originalNum = num;

   // count the number of digits in the number
   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }

   originalNum = num;

   // calculate the result using the formula for Armstrong numbers
   while (originalNum != 0) {
      remainder = originalNum % 10;
      result += pow(remainder, n);
      originalNum /= 10;
   }

   if (result == num){
      cout << num << " is an Armstrong number.";
      cout<<" "<<endl;
   }

   else{
      cout << num << " is not an Armstrong number.";
      cout<<" "<<endl;
   }

   return 0;
}