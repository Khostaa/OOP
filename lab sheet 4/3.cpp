// Write a class that can store Department ID and Department Name with constructors to initialize its members.
// Write destructor member in the same class and display the message "Object n goes out of the scope".
// Your program should be made such that it should show the order of constructor and destructor invocation.
#include <iostream>
class dept
{
  private :
    int dept_id;
    char dept_name[30];
  public:
   dept(int id, char name )
   {
       dept_id = id;
       dept_name[30] = name;
   }
   void enterData()
   {
       std :: cout<< "Enter Department Id: ";
       std :: cin >> dept_id;
       std :: cout << "Enter Department Name: ";
       std :: cin >> dept_name;
   }
   ~dept()
   {
       std :: cout << "object n goes out of the scope";
   }
};
int main()
{
    dept d(int,char);
    d.enterData();
    d.dept();
    d.~dept();
    return 0;
}