#include <iostream>
class vehicle
{
  private:
   int num_vehicle,hour;
   float rate;
  public:
   vehicle(int x,int y, float z)
   {
     num_vehicle = x;
     hour = y;
     rate = z;
   }
   int calculate()
   {
       int total;
       if(num_vehicle >10)
       {
         total = hour * rate *0.9;
         return total;
       } 
        else 
        {
            return hour * rate;
        }
   }
};
int main()
{
    int a, b, c;
    std :: cout << "Enter no. of vehicles, hour, rate:";
    std :: cin >> a >> b >>c;
    vehicle v1(a,b,c);
    vehicle v2(v1); //copy constructore invoked
    std:: cout << "Total charge is " << v1.calculate() << std :: endl;
    std :: cout << "For copy constuctor:"<< std :: endl;
    std :: cout << "Total charge is " << v2.calculate();
    

}