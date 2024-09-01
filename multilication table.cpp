#include <iostream>
using namespace std;

int main()
{
    int n,range;

    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Enter a range: ";
    cin >> range;


    for (int i = 1; i <= range; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    for (int i = 1; i <= range; ++i)
    {
         cout << n << " / " << i << " = " << n % i << endl;	
	}
    
    return 0;
}

