#include <iostream>
#include <iomanip>
using namespace std;

float addTax(float taxRate, float cost)
{
  taxRate = taxRate/100.0;

  float taxOutput = cost * taxRate;
  //calculates tax on a iteml

  float totalCost = taxOutput + cost;

  cout << setprecision(2) << fixed;
//round the total cost to 2 decimal points(setprecision)
  return totalCost;
}

int main(){
  cout << "Total cost with tax: $" << addTax(14.4, 25) << endl;
//calls addTax with values
  return 0;
}
