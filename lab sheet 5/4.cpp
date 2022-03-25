#include <iostream>
using namespace std;
class Date
{
  private:
    int d,m,y;
   public:
     Date(int year=0,int month=0, int day=0)
     {
         d=day;
         m=month;
         y=year;
     }
     Date operator ++()
     {
         ++d;
          if(d>30)
          {
            ++m;
            d-=30; 
          }     
          if(m>12)
          {
            ++y;
            m-=12;
          }
            
         return Date(y,m,d);
     }
     Date operator ++(int)
     {
         d++;
          if (d>30)
          {
            m++;
            d-=30;
          }
             
          if (m>12)
          {
            y++;
            m-=12;
          }
             
         return Date(y,m,d);
     }
     void display()
     {
         cout << "Date after increment is : "<< y <<"/" <<m<<"/"<<d<<endl;
     }

};
int main()
{
    int dd,mm,yy;
    cout << "Enter Date in years, months and day: ";
    cin >>yy>>mm>>dd;
    Date d1(yy,mm,dd);
    d1++;
    ++d1;
    d1.display();
    
}