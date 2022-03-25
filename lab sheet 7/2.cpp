/*Create a class Person and two derived classes Employee and Student, inherited from class Person.
 Now create a class Manager which is derived from two base classes Employee and Student. Show the use of 
 the virtual base class.*/
 #include <iostream>
 using namespace std;
 class Person
 {
     protected:
      char name[20];
      int age;
     public:
      void pread()
      {
        cout << "Enter name:";
        cin >> name;
        cout <<"Enter age: ";
        cin >> age;
      }
      void pdisplay()
      {
          cout << "Name = "<< name << endl;
          cout << "Age = "<< age <<endl;
      }


 };
 /*The   keyword   'virtual'   makes  only   one   copy  of  ger_per_data()

and   show_per_data()   Which   avoids ambiguity.  If we do not   supply

keyword 'virtual' the compiler cannot decides which class' get_per_data()

and show_per_data() to be called    because they are the member funcions

of classes Employee , Student, and Manager as well.*/
 class Employee : public virtual Person
 {
     protected:
      char d[30];
     public:
      void read()
      {
          cout << "Enter designation:";
          cin >>d;
      }
      void display()
      {
          cout << "Designation: " << d << endl;
      }

 };
 class Student : public virtual Person
 {
     protected:
      int roll;
     public:
      void read()
      {
          cout << "Enter roll no: ";
          cin >> roll;
      }
      void display()
      {
          cout << "Roll no.: " <<roll <<endl;
      }

 };
 class manager : public Employee,Student
 {
     protected:
      unsigned int salary;
     public:
      void read()
      {
          Employee :: read();
          Student :: read();
          cout << "Enter salary: ";
          cin >> salary;
      }
      void display()
      {
          Employee :: display();
          Student :: display();
          cout << "Salary: "<< salary <<endl;
      }
 
 };
 int main()
 {
     manager m;
     cout << "Enter Data For Manager:" << endl;
     m.pread();
     m.read();
     cout << endl ;
     cout << "Displaying Information: "<<endl;
     cout << "-------------------------"<<endl;
     m.pdisplay();
     m.display();
     return 0;
 }