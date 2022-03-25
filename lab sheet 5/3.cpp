/*Write a program to compare two objects of a class that contains an integer value as its data member.
 Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), 
 greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.*/
#include <iostream>
using namespace std;
class compare
{
    private:
     int x;
    public:
     void get()
     {
         cin>>x;
     }
     void operator ==(compare c2)
     {
       if(x==c2.x)
         cout << x << " and " << c2.x << " are equal"<<endl;
        else
          cout << x << " and " << c2.x << " are not equal"<<endl;
     }
     void operator >(compare c2)
      {
          if(x > c2.x)
            cout <<x << " is greater than "<<c2.x << endl;
           else
             cout << c2.x <<" is greater than " << x <<endl;
      }
     void operator <(compare c2)
     {
         if(x < c2.x)
            cout <<x << " is less than "<<c2.x << endl;
           else
             cout << c2.x <<" is less than " << x <<endl;
     }
     void operator !=(compare c2)
    {
        if(x!=c2.x)
         cout << x << " and " << c2.x << " are not equal"<<endl;
        else
          cout << x << " and " << c2.x << " are equal"<<endl;
    }
     void operator >=(compare c2)
     {
         if(x>=c2.x)
         cout << x << " is greater than or equal to "<<c2.x <<endl;
        else
          cout << c2.x << " is greater than or equal to "<<x <<endl;
     }
     void operator <=(compare c2)
     {
        if(x<=c2.x)
         cout << x << " is less than or equal to "<<c2.x <<endl;
        else
          cout << c2.x << " is less than or equal to "<<x <<endl;
     }
     
};
int main()
{
    compare c1,c2;
    cout << "Enter 1st value: ";
    c1.get();
    cout << "Enter 2nd value: ";
    c2.get();
    c1==c2;
    c1>c2;
    c1<c2;
    c1!=c2;
    c1>=c2;
    c1<=c2;
    return 0;
}