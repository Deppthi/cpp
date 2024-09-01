#include<iostream>
using namespace std;
 
int main()
{
    int number, temp = 1;
 
    cout << "Enter the number to determine its factors : " ;
    cin >> number;
    cout << "The factors of " << number << " are : ";
    while (temp <= number)
    {
        if (not(number % temp))
            cout << temp << " ";
 
        temp++;
    }
    return 0;
}

