#include <iostream>
#include <string>
using namespace std;

int main(){
  //make an a
  int numberArray[10];
  int number;

  cout << "Enter 10 integers.";
  //for loop that takes 10 user inputs and puts into the numberArray
  for (int  i = 0; i < 10; ++i){
    cin >> number;
    if (number < 0) {
      cout << "You entered a negative number" << endl << "Enter in a positive number";
      cin >> number;
    }
    numberArray[i] = number;
  }

  // another for loop that prints out the numbers
  cout << "Here are the numbers you entered: ";
  for (int i = 0; i < 10; ++i) {
    cout << numberArray[i] << " ";
  }
  cout << endl;


  return 0;
}
