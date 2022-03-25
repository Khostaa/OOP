#include <iostream>
class relation
{
    private: 
     const int a;
    public:
     relation (int x) : a(x){};
     void func1(){std :: cout << "The value of a is "<<a <<std :: endl;}
     void func2() const
     {
         std :: cout << "The value of a is "<< a << std :: endl;
     }

};
int main()
{
 relation r(5);
 r.func1(); //non constant object and non constant function
 r.func2(); // non constant object and constant function
 const relation r1(6); //constant object
 // r1.func1(); //constant object can only  access constant member function //invalid
 r1.func2();
 return 0;
}