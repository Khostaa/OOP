/*Write a program with an abstract class Student and create derive classes Engineering, Medicine and 
Science from base class Student. Create the objects of the derived classes and process them and access 
them using an array of pointers of type base class Student.*/
#include <iostream>
#include <cstring>
using namespace std;
class Student
{
  protected:
   char name[20];
   int roll;
  public:
   virtual void input()=0;

   virtual void output()=0; // pure virtual function which makes abstract class
  
};
class Engineering: public Student
{
  protected:
   char name[30];
   int roll;
  public: 
   void input()
   {
     cout << "Enter details of Engineering Student: "<<endl;
     cout << "Enter name: " ;
     cin >> name;
     cout << "Enter roll no: ";
     cin >> roll;
     cout <<endl;
   }
   void output()
   {
     cout<<"**Displaying informatiion of engineering student** "<<endl;
     cout<<"------------------------------------------------"<<endl;
     cout << "Name : " << name<<endl;
     cout << "Roll no: "<< roll<<endl;
     cout <<endl;
   }
};
class Medical: public Student
{
  protected:
   char name[30];
   int roll;
  public: 
   void input()
   {
     cout <<"Enter details of Medical Student: "<<endl;
     cout << "Enter name: " ;
     cin >> name;
     cout << "Enter roll no: ";
     cin >> roll;
     cout <<endl;
   }
   void output()
   {
     cout <<"**Displaying information of Medical Student**"<<endl;
     cout <<"--------------------------------------------"<<endl;
     cout << "Name : " << name <<endl;
     cout << "Roll no: "<< roll <<endl;
     cout <<endl;
   }
};
class Science: public Student
{
  protected:
   char name[30];
   int roll;
  public: 
   void input()
   {
     cout << "Enter details of Science Student"<<endl;
     cout << "Enter name: " ;
     cin >> name;
     cout << "Enter roll no: ";
     cin >> roll;
     cout <<endl;
   }
   void output()
   {
     cout << "**Displaying information of Science Student** "<<endl;
     cout <<"---------------------------------------------"<<endl;
     cout << "Name : " << name <<endl;
     cout << "Roll no: "<< roll <<endl;
     cout <<endl;
   }
};
int main()
{
  Engineering en;
  Medical m;
  Science sc;
  Student *s[]={&en,&m,&sc};
 
  for (int i=0;i<3;i++)
     s[i]->input();
  for (int i=0;i<3;i++)
     s[i]->output();

  return 0;

}