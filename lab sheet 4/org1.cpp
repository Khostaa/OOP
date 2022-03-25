#include <iostream>
class Time
{
    private:
      int hrs,mins,sec,tmp;
    public:
      Time()
      {
          hrs = 0;
          mins = 0;
          sec =0;
      }
      Time(int hours,int minutes,int seconds)
      {
          hrs=hours;
          mins=minutes;
          sec=seconds;
      }
      void display()
      {
          std :: cout <<hrs <<":"<<mins<<":"<<sec<<std :: endl;
      }
    
      void add(Time x, Time y)
      {
          tmp = 0;
          sec = x.sec + y.sec ;
          if(sec>60)
             tmp= sec/60;
          mins = x.mins + y.mins + tmp;
          sec %=60;
          tmp=0;
          if (mins > 60)
            tmp = mins/60;
          hrs = x.hrs +y.hrs + tmp;
      
          mins%=60;
          
          
      
      }
       void convert12()
       {
        if(hrs>12)
          hrs=hrs - 12;
       }
       void convert24()
       {
           if(hrs>24)
             hrs = hrs-24;
         
       }
};
int main()
{
    Time t3;
    int h1,m1,s1,h2,m2,s2;
    std :: cout <<"Enter 1st time in hours, minutes and seconds:";
    std:: cin >> h1 >> m1 >> s1;
    Time t1(h1,m1,s1);
    t1.display();
    std :: cout << "Enter another time in hours, minutes and seconds: ";
    std :: cin >> h2 >>m2 >> s2;
    Time t2(h2,m2,s2);
    t2.display();
    std :: cout << "Time after addtion: "<<std :: endl;
    t3.add(t1,t2);
    std :: cout << "Time in 24-hour format:"<<std :: endl;
    t3.convert24();
    t3.display();
    std :: cout << "Time in 12-hour format: "<<std :: endl;
    t3.convert12();
    t3.display();
    return 0;
}