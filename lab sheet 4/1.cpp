#include <iostream>
class time
{
 private:
   int hours,minutes,seconds;
  public:
    time()
    {
      hours = 0;
      minutes=0;
      seconds=0;

    }
    time(int hrs,int min,int sec)
    {
      hours=hrs;
      minutes = min;
      seconds = sec;
    }
    void input()
    {
      std :: cout << "Enter time in hours, minutes and seconds";
      std :: cin >> hours >> minutes >> seconds;
      time(hours,minutes,seconds);
    }
    void display()
    {
      std :: cout << "Time: ";
      std :: cout << hours <<":"<< minutes <<":"<<seconds<< std :: endl ;
    }
    void add(time x, time y)
    {
        int tmp =0;
        seconds = x.seconds + y.seconds;
        if(seconds > 59)
        {
          seconds =seconds -59;
          tmp ++;
        }
          
        minutes = x.minutes + y.minutes + tmp;
        tmp =0;
        if (minutes > 59)
        {
           minutes = minutes-59;
           tmp++;
        }
        hours = x.hours + y.hours + tmp;
        if(hours >=24)
        {
            hours=hours - 24;
        }
        std :: cout << hours << ":" << minutes << ":" << seconds << std :: endl;
         

    }

   
};
int main()
{
    time t1,t2,t3;
    t1.input();
    t1.display();
    t2.input();
    t2.display();

    std :: cout << "\nAfter Add:";
    t3.add(t1,t2);
    t3.display;

    return 0;
}