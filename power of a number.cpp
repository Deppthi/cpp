#include<iostream>
using namespace std;
int main()
{
  // declare variables
  int base, exponent;
  long result=1;

  // take input
  cout << "Enter base and exponent: ";
  cin >> base >> exponent;

  // calculate power value
  for (int i = exponent; i >= 1; i--)
  {
    result *=base;
  }

  // display result
  cout << "Result = " << result << endl;

  return 0;
}
