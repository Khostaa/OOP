/*Write a program to create a class shape with functions to find the area of the shapes and 
display the names of the shapes and other essential components of the class. Create derived classes 
circle, rectangle, and trapezoid each having overriding functions area() and display(). Write a suitable
program to illustrate virtual functions and virtual destructors.*/
#include <iostream>
using namespace std;
class shape
{
    protected:
     int x,y;
  public:
   shape() : x(0),y(0){} //default construtor for shape class
   shape (int a, int b) //paramaterized construtor for shape class
   {
       x=a;
       y=b;
   }
   virtual ~shape() //virtual destructor
   {
       cout <<"Virtual destructor destroyed."<<endl;
   }
   virtual int area(){return 0;}; //virtual function

   virtual void display() {};
};
class circle : public shape
{
  private: 
   int r;
  public:
   
   circle(int radius)
   {
       r=radius;
   }
   int area()
   {
        return 3.14 * r * r;
   }
   void display()
   {
       cout << "The area of Circle is "<< area()<<endl;
   }
   ~circle()
    {
        cout << "Destrctor from derived class Circle destroyed"<<endl;
    }
};
class rectangle : public shape
{
 private:
  int l;
  int b;
 public:
  rectangle(int length, int breadth)
  {
      l=length;
      b=breadth;
  } 
  int area()
  {
      return l*b;
  }
  void display()
  {
      cout << "The area of rectangle is "<< area() <<endl;
  }
  ~rectangle()
  {
      cout << "Destructor from derived class rectange destroyed." << endl;
  }
};
class trapezoid : public shape
{
    private:
     int a,b,h;
     float ar;
    public:
      trapezoid(int b1,int b2,int height)
      {
          a=b1;
          b=b2;
          h=height;
      }
      int area()
      {
          ar = (a+b)*h/2;
          return ar;
      }
      void display()
      {
          cout << "The area of trapezoid is "<<area() << endl;
      }
      ~trapezoid()
      {
          cout << "Destuctor from derived class trapezoid destoryed"<<endl;
      }
};
int main()
{
    int k,l,b,m,n,h;
    //shape *s;
    cout << "Enter radius of circle: ";
    cin >> k;
    circle c(k);
    // s = &c; 
    // s->display();
    cout << "Enter length and breadth of rectangle:";
    cin >> l>> b;
    rectangle rect(l,b);
    // s = &rect;
    // s -> display();
    cout << "Enter two bases and height of trapezoid: "; 
    cin >> m>>n>>h;
    trapezoid t(m,n,h);
  //     s = &t;
   //     s->display();
   shape *s[]={&c,&rect,&t};
   for (int i=0;i<3;i++)
   {
     s[i]->area();
     s[i]->display();
   }
  return 0;
}