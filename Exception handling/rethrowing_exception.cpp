#include <iostream>
using namespace std;
void divide(int a, int b)
{
    try
    {
        if(b == 0)
        {
            throw b;
        }
        else
        {
            cout << "RESULT: "<< (float)a/b;
        }
    }
    catch(int)
    {
        throw;
    }
}
int main()
{
    int x,y;
    cout << "Enter values of X and Y: ";
    cin >> x >> y;
    try
    {
        divide(x,y);
    }
    catch(int a)
    {
        cout << "Divisor cannot be zero.";
    }
    return 0;
}