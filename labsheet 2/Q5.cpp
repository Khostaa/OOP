/*Assume that employee will have to pay 10 percent income tax to the government.
 Ask user to enter the employee salary. Use inline function to display the net payment 
 to the employee by the company.*/
#include <iostream>
inline double salary(double sal)
{
  return (sal-0.1*sal);
}
    
int main()
{
    double sal;
    std :: cout <<"Enter salary of employee: ";
    std :: cin >> sal;
    std :: cout << "Net salary of employee is " << salary(sal);
    return 0;
}