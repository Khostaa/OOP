#include <iostream>
#include <bits/stdc++.h>
class circle
{
    private :
     int r;
     float p,ar;
    public :
    void setdata()
    {

        std :: cout << "Enter value of radius: ";
        std :: cin >> r;
        p =  2 * 3.14 * r;
        ar = 3.14 *r*r;

    }
     void showdata()
     {
         std :: cout << "Perimeter of circle is "<< p << " units."<< std :: endl;
         std :: cout << "Area of circle is "<< ar <<" sq.units. " << std :: endl;
         std :: cout << std :: endl;
     }

};
class rectangle
{
 private :
     int l,b,p,ar;
    public :
    void setdata()
    {

        std :: cout << "Enter length of rectangle: ";
        std :: cin >> l;
        std :: cout << "Enter breadth of rectangle: ";
        std :: cin >> b;
        p = 2*(l+b);
        ar = l*b;

    }
     void showdata()
     {
         std :: cout << "Perimeter of rectangle is "<< p<<" units." << std :: endl;
         std :: cout << "Area of rectangle is "<< ar << " sq. units." << std :: endl;
         std :: cout << std :: endl;
     }
};
class triangle
{
    private :
     int a,b,c,p,s;
     float ar;
    public :
    void setdata()
    {

        std :: cout << "Enter sides of triangle: ";
        std :: cin >> a >> b >> c;
        p = a+b+c;
        s=(a+b+c)/2;
        ar = sqrt(s*(s-a)*(s-b)*(s-c));

    }
     void showdata()
     {
         std :: cout << "Perimeter of triangle is "<< p <<" units." << std :: endl;
         std :: cout << "Area of triangle is "<< ar <<" sq.units." << std :: endl;
         std :: cout << std :: endl;
     }

};
int main()
{
    triangle t;
    t.setdata();
    t.showdata();

    circle c;
    c.setdata();
    c.showdata();

    rectangle r;
    r.setdata();
    r.showdata();
    return 0;


}