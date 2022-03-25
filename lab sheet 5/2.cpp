//correct
#include<iostream>
using namespace std;
class coordinate
{
    float x,y,z;
public:
    coordinate(float a=0,float b=0,float c=0):x(a),y(b),z(c){}
    friend coordinate operator +  (coordinate a,coordinate b);
    friend coordinate operator - (coordinate a, coordinate b);
    void display()
    {
        cout<<x<<","<<y<<","<<z<<endl;

    }
};
coordinate operator +(coordinate a,coordinate b)
{
    coordinate temp(a.x+b.x,a.y+b.y,a.z+b.z);
    return temp;
}
coordinate operator -(coordinate a,coordinate b)
{
    coordinate temp(a.x-b.x,a.y-b.y,a.z-b.z);
    return temp;
}
main()
{
    int x,y,z;
    char temp;
    coordinate s,t;
    cout<<"enter coordinate x,y,z"<<endl;
    cin>>x>>y>>z;
    coordinate a(x,y,z);
    cout<<"enter coordinate"<<endl;
    cin>>x>>y>>z;
    coordinate b(x,y,z);
    cout<<"sum is:";
    s = a+b;
    s.display();
    cout <<"Diffrence is:";
    t = a-b;
    t.display();
    return 0;
}