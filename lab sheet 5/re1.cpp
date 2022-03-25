//correct
/*Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, 
and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend 
functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict.*/
#include <iostream>
class cart2;
class cart1
{
  private:
   int x,y;
  public:
    void getdata(int a, int b)
    {
         x=a;
         y=b;
    }
    void add(cart1,cart2);
    friend void sub(cart1,cart2);
    friend void mul(cart1,cart2);
    friend void div(cart1,cart2);
};
class cart2
{
  private:
   int x,y;
  public:
    friend class cart1;
    void getdata(int a, int b)
    {
         x=a;
         y=b;
    }
    friend void cart1 :: add(cart1,cart2);
    friend void sub(cart1,cart2);
    friend void mul(cart1,cart2);
    friend void div(cart1,cart2);
};
void cart1 :: add(cart1 a, cart2 b)
{
  int x= a.x + b.x;
  int y= a.y + b.y;
  std :: cout << "The sum is "<< x <<" , " << y<<std :: endl;
}
void sub (cart1 a, cart2 b)
{
    int x= a.x-b.x;
    int y= a.y-b.y;
    std:: cout <<"The difference is "<< x <<" , " << y << std :: endl;
}
void mul(cart1 a , cart2 b)
{
    int x = a.x * b.x;
    int y= a.y * b.y;
    std :: cout << "The multiple is "<< x << " , "<<y << std :: endl;
}
void div(cart1 a, cart2 b)
{
    int x= a.x/b.x;
    int y=a.y / b.y;
    std :: cout << "Division = "<<x << " , " <<y << std :: endl;
}
int main()
{
    int m,n,o,p;
    cart1 x;
    cart2 y;
    std :: cout << "Enter co-ordinates of x and y: ";
    std :: cin >> m >>n;
    std :: cout << "Enter another co-ordinates of x and y: ";
    std :: cin >> o >> p;
    x.getdata(m,n);
    y.getdata(o,p);
    x.add(x,y);
    sub(x,y);
    mul(x,y);
    div(x,y);
    return 0;
}