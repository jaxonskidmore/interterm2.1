#include <iostream>
#include <iomanip>
using namespace std;

void theConversion(float meters, float centi)
{
  cout << "Conversion output: " << endl;
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centi << endl;
}
//void function to call later

void calcFunc(float feet, float inch)
{
  float meters = 0;
  float centi = 0;
  float meterPFoot = 0.3048;
  float meterPInch = meterPFoot/12;
  meters = feet * meterPFoot;
  centi = inch * 2.54;

  theConversion(meters, centi);
}
//sets up empty variables, and calculates the conversions


void userInput()
{
  float feet = 0;
  float inch = 0;
  cout << "Enter how many feet: " << endl;
  cin >> feet;
  cout << "Enter how many inches: " << endl;
  cin >> inch;

//takes parameters of feet and inch and outputs calculation
  calcFunc(feet, inch);
}

int main()
{
  bool keepRunning = true;
  string userCheck = "";
//creating bool to set while up to allow user to keep entering
  while(keepRunning){
    userInput();

    cout << "Would you like to enter values again?" << endl;
    cout << "Press any key to continue, exit to stop program." << endl;
    cin >> userCheck;
    if(userCheck == "exit"){
      keepRunning = false;
    }
  }
  return 0;
}
