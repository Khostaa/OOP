#include <iostream>
#include <cstring>
class store
{
  private:
   int id;
   char name[20];
  public:
   store()
   {
       std :: cout <<"Constructor called"<< std :: endl;
       id=7;
       char deptname[]="Khosta Department store";
       strcpy(name,deptname);
   }
   ~store()
   {
       std :: cout <<"Object n goes out of scope." << std :: endl;
   }
   void showdata()
   {
     std :: cout <<name<<std :: endl;
   }
};
int main()
{
    store s1;
    s1.showdata();
    return 0;
}
