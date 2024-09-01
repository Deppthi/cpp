#include<iostream>
using namespace std;
int main()
{
  // declare variables
  int term;
  int t1 = 0; // first term
  int t2 = 1; // second term
  int n = 0; // nth term

  // take input
  cout << "Enter term: ";
  cin >> term;

  if(term==1)
  {
    cout << "Fibonacci term is = " << t1 << endl;
    return 0;
  }
  if(term==2)
  {
    cout << "Fibonacci term is = " << t2 << endl;
    return 0;
  }

  // 2 terms are already exist so
  // iterator variable should
  // start with 3
  for(int i=3; i <= term; i++)
  {
     // update term values
     n = t1 + t2;
     t1 = t2;
     t2 = n;
  }
  cout<<"fibonacci term "<<n<<endl;
  return 0;
}
