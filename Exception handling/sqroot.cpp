//writea a program to find the square root of the given number. Check the vaidity of input number and 
//raise the exception as per requirement.
#include <iostream>
#include <math.h>
using namespace std;
class SquareRoot
{
    double num;
  public:
   class number{}; //abstract class
   void readnum();
   double sqroot();
};
void SquareRoot :: readnum()
{
    cout << "Enter Number to find square root of : ";
    cin >> num;
}
double SquareRoot :: sqroot()
{
    if(num<0)
    {
        throw number();
    }
    else
      return sqrt(num);
}
int main()
{
    SquareRoot s;
    s.readnum();
    try
    {
        double res;
        res = s.sqroot();
        cout << "Square root is : "<<res<<endl;
        cout << "Success.. Exception is not raised.";
    }
    catch(SquareRoot :: number)
    {
        cout << "Squareroot of negative number is not possible";
    }
    return 0;
    

    
}