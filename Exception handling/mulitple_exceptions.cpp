#include <iostream>
using namespace std;
void test(int x) 
{
    try
    {
        if(x==1) throw 'x';
        if (x==2) throw 1;
        if (x==3) throw 1.0;
        cout << "End of try block";
    }
    catch(char c)
    {
       cout << " Caught a character"<<endl;
    }
    catch(float f)
    {
        cout << "Caught a float"<<endl;
    }
    catch(int i)
    {
        cout << "Caught a integer"<<endl;
    }
}
int main()
{
    cout << "Testing Multiple catches.";
    cout << "X==1"<<endl;
    test(1);
    cout << "X==2"<<endl;
    test(2);
    cout << "X == 3 "<<endl;
    test(3);
    return 0;
}