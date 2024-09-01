#include <iostream>
using namespace std;

int main()
{
	int n,r;
	
	cout << "enter a positive integer:";
	cin >> n;
	cout << "enter a positive range:";
	cin >> r;
	
	for (int i = 1; i <= r ; ++i){
		cout << n << " * " << i << " = " << n * i << endl;
	}
	
	return 0;	
}
