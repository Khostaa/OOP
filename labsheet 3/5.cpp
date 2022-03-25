//Assume that an object represents an employee report that contains information like employee id, total bonus, 
// total overtime in a particular year. Use an array of objects to represent n employees' reports.
//  Write a program that displays the report. Use setpara() member function to set report attributes by 
//  passing the arguments and member function displayreport() to show the report according to the parameter
//   passed. Display the report in the following format.

// // An employee with ... ... ... has received Rs ... ... ...as a bonus

// // and

// // had worked ... ... ... hours as overtime in the year ... ... ...
#include <iostream>
class employee
{
    private:
    int n;
     int eid;
     int bonus;
     int ot;
    public:
     void setpara()
     {
         std :: cout <<"Enter employee id : "<< std ::endl;
         std :: cin >> eid;
         std :: cout << "Enter total Bonus amount: "<< std :: endl;
         std :: cin >>bonus;
         std :: cout << "Enter total Overtime: "<< std :: endl;
         std :: cin >> ot;
     }
     void displayreport()
     {
        std :: cout << "An employee with id: "<<eid<< " has received Rs. "<< bonus << " as a bonus" <<std :: endl;
        std :: cout << "and" << std :: endl;
        std :: cout << "had worked "<< ot << " hours as a overtime in the year" << "......" << std :: endl;
        std :: cout << std:: endl;
     }
};
int main()
{
    int n;
    std :: cout << "Enter no. of employees" << std :: endl;
    std:: cin >> n;
    employee e[n];
    for(int i=0;i<n;i++)
        {
         std :: cout << "For Employee "<< i+1 << std :: endl;
         std :: cout << "---------------" << std:: endl;
         e[i].setpara();
        }
    std :: cout << "Displaying Information" << std :: endl;
    std :: cout <<"------------------------"<< std :: endl;
    for(int i=0;i<n;i++)
    {
        std :: cout <<"DETAILS OF EMPLOYEE " << i+1 << std :: endl;
        e[i].displayreport();
    }
    return 0;
}