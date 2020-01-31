#include <iostream>
using namespace std;
int main() {
   int a[4][5];

   int number;
   // makes the 2d array
   for(int i = 0; i < 4; ++i)
   {
       for(int x = 0; x < 5 ; ++x){
         cout << "Enter a number: ";
         cin >> number;
         a[i][x] = number;
       }

   }
   // for loop inputs the values into the 2d array
   return 0;
}
