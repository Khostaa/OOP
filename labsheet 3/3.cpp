/*Create a class called carpark that has int data member for car id, int data member for charge/hour, and 
float data member for the parked time. Make functions to set data members and show the charges and parked
hours of the corresponding car id. Make functions for setting and showing the data members. Member function
should be called from other functions.*/
#include <iostream>
class carpark
{
  private:
    int id; //car id
    int cph; //charge per hour
    float pt; //parked time
  public:
   void setdata()
   {
       std :: cout << "Enter the car id:"<< std :: endl;
       std :: cin >> id;
       std :: cout << "Enter charge per hour:" << std :: endl;
       std :: cin >> cph;
       std :: cout <<"Enter parked time: " << std :: endl;
       std :: cin >> pt;
   }
   void showdata()
   {
       std :: cout <<"Car id: " << id << std :: endl;
       std :: cout << "charge per hour: "<< cph << std :: endl;
       std :: cout << "Parked time: "<< pt << std :: endl;
   }

};
int main()
{
    carpark c;
    int n;
    std :: cout << "Enter the no. of cars:"<< std :: endl;
    std :: cin >> n;
    for (int i=1;i<=n;i++)
    {
      std :: cout << "For car "<< i << std :: endl;
      c.setdata();
      std :: cout << "Details of car "<< i << std :: endl;
      std :: cout << "--------------------"<<std :: endl;
      c.showdata();
      std :: cout << std :: endl;
    }
 
    return 0;
}