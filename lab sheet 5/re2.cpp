//correct
#include <iostream>
using namespace std;
class space
{
    private:
     int x,y, z;
    public:
     space(int a=0, int b=0, int c=0)
     {
         x=a;
         y=b;
         z=c;
     }
     friend space operator + (space a,space b  );
     friend space operator - (space a, space b);
     void display () {cout << x << ","<<y <<","<<z << endl;}
      
};

space operator + (space m,space n)
{
    space temp(m.x+n.x,m.y+n.y,m.z+n.z);
    return temp;
}
space operator - (space m,space n)
{
   space temp(m.x-n.x,m.y-n.y,m.z-n.z);
   return temp ;
}
int main()
{
  int p,q,r,s,t,u;
  space c,d;
  cout << "Enter coordinates of first point(x,y,z): ";
  cin >> p>>q>>r;
  space a(p,q,r);
  cout << "Enter coorinates of second point(x,y,z): ";
  cin >> s >> t >> u;
  space b(s,t,u);
  cout << "Sum is :"<< endl;
  c=a+b;
  c.display();
  cout << "diffrence is :"<<endl;
  d=a-b;
  d.display();

  return 0;
}