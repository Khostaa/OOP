/*Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.*/
#include <iostream>
int &large(int &,int&);
int main()
{
    int t1,t2,l;
    std :: cout <<"Enter values of temperature: ";
    std :: cin>>t1>>t2;
    l=large(t1,t2);
    std :: cout << l << " is largest.";
    return 0;
}
int &large (int &a,int &b)
{
    if(a>b)
      return a;
    else
      return b;
}