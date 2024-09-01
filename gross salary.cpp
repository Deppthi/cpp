#include <iostream>
using namespace std;

int main()
{
    double Basic_Salary, DA, HRA, Gross_Salary;
    
    cout << "Enter Basic Salary : ";
    cin >> Basic_Salary;
    
    DA = (Basic_Salary * 40) / 100;
    HRA = (Basic_Salary * 20) / 100;
    Gross_Salary = Basic_Salary + DA + HRA;
    
    cout << "\n\nDearness Allowance 40 % of Basic Salary : " << DA;
    cout << "\nHouse Rent 20 % of Basic Salary : " << HRA;
    cout << "\nGross Salary : " << Gross_Salary;
    
    return 0;
}

