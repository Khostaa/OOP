//correct
#include <iostream>
using namespace std;
class cartesian2; //Forward Declaration
class cartesian1
{
    protected:
      float x,y;
    public:
    cartesian1(): x(0),y(0){}; //intializes x to 0 and y to 0;
    cartesian1(float xx,float yy): x(xx),y(yy){}; //gives xx to x and yy to y;
     void add(cartesian1,cartesian2);
     friend void sub(cartesian1,cartesian2);
     friend void mul(cartesian1,cartesian2);
     friend void div(cartesian1,cartesian2);
};
class cartesian2
{
    protected:
      float x,y;
    public:
    cartesian2(): x(0),y(0){}; //intializes x to 0 and y to 0;
    cartesian2(float xx,float yy): x(xx),y(yy){}; //gives xx to x and yy to y;
     friend void cartesian1 :: add(cartesian1,cartesian2);
     friend void sub(cartesian1,cartesian2);
     friend void mul(cartesian1,cartesian2);
     friend void div(cartesian1,cartesian2);
};
void cartesian1 ::  add(cartesian1 a,cartesian2 b)
{
 float x = a.x + b.x;
 float y= a.y + b.y;
 cout << "The Sum is "<<x<<","<<y<<endl;
}
void sub(cartesian1 a,cartesian2 b)
{
    float x = a.x - b.x;
    float y = a.y - b.y;
    cout << "The Difference is "<< x << ","<<y<<endl;
}
int main()
{
    cartesian1 m(3,5),p;
    cartesian2 n(4,6);
    p.add(m,n);
    sub(m,n);
    return 0;

}