/*Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. 
Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.*/

#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle
{
  public:
   virtual void diplay()
   {    
   }
};
class Bus :public Vehicle
{
};
class Car : public Vehicle
{
};
class Bike: public Vehicle
{
};
int main()
{
    Vehicle *pveh,veh;
    Bus *pbu,bu;
    Car *pca,ca;
    Bike *pbk,bk;

   cout <<"**Results for Base pointer pointing to Derived objects**"<<endl;
    
    pveh=&bu;
    pbu=dynamic_cast<Bus *>(pveh);
    if(pbu)
       cout <<"The cast to derived pointer pbu is successful."<<endl;
    else
        cout <<"The cast to derived pointer pbu has failed."<<endl;
    
    pveh=&ca;
    pca=dynamic_cast<Car *>(pveh);
    if(pca)
      cout <<"The cast to derived pointer pca is successful."<<endl;
    else
       cout<<"The cast to derived pointer pca has failed."<<endl;

    pveh = &bk; 
    pbk = dynamic_cast<Bike * > (pveh);
    if (pbk)
       cout <<"The cast to derived pointer pbk is successful."<<endl;
    else  
       cout <<"The cast to derived pointer pbk has failed."<<endl;

    cout <<endl<<"**Results for Base pointer pointing to base objects.**"<<endl;

    pveh =&veh;
    pbu = dynamic_cast<Bus * > (pveh);
    if(pbu) cout <<"The cast to derived pointer pbu is successful."<<endl;
    else cout <<"The cast to derived pointer pbu has failed."<<endl;

   
    
    pveh = &veh;
    pca = dynamic_cast<Car *>(pveh);
    if(pca) cout <<"The cast to derived pointer pca si successful."<<endl;
    else cout <<"The cast to derived pointer pca has failed."<<endl;

    pveh =&veh;
    pbk =dynamic_cast<Bike *>(pveh);
    if(pbk) cout <<"The Cast to derived pointer pbk is successful"<<endl;
    else cout <<"The cast to derived pointer pck has failed."<<endl;

    cout << endl << "**Findings type with typeid**"<<endl;
    cout << "----------------------------------"<<endl;
    cout << "type of veh is : "<<typeid(veh).name()<<endl;
    cout <<"type of *pveh is : "<<typeid(*pveh).name()<<endl;
    cout <<"type of bu is : "<<typeid(bu).name()<<endl;
    cout <<"type of ca is : "<<typeid(ca).name()<<endl;
    cout<<"type of bk is : "<<typeid(bk).name()<<endl;
   
    cout<<endl<<"**finding type with polymorphic types**"<<endl;
    pveh = &bu;
    cout <<"type of *pveh when pointing to bu is : "<<typeid(*pveh).name()<<endl;
    pveh = &veh;
    cout <<"type of *pveh when pointing to veh is : "<<typeid(*pveh).name()<<endl;\
     
     cout<<endl<<"**Comparing types with typeid**"<<endl;
    if(typeid(bu)==typeid(ca))
         cout <<"type of bus and car is same."<<endl;
    else
        cout <<"type of bus and car is different."<<endl;
    return 0;



    

}