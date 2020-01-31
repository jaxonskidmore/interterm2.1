#include <iostream>
using namespace std;

void zeroBoth(int num1, int num2) {
  num1 = 0;
  num2 = 0;

}
int main() {
  int x = 8;
  int y = 24;

  cout << "First Number: " << x << endl;
  cout << "Second Number: " << y << endl;
  zeroBoth(x, y);
  //calls the function
  cout << "First Number: " << x << endl;
  cout << "Second Number: " << y << endl;

  return 0;
}
