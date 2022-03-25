#include <iostream>
class serial
{
    public: 
     static int n;
     static void show()
     {
         n++;
         std :: cout <<"object " << n << " created" << std :: endl;
     }
};
int serial :: n;
int main()
{
    serial s1,s2,s3,s4;
    serial :: show();
    serial :: show();
    serial :: show();
    serial :: show();
    return 0;
}