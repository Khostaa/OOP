/*Assume that you want to check whether the number is prime or not. Write a program that asks for 
numbers repeatedly. When it finishes checking a number the program asks if the user wants to
do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.*/
#include <iostream>
class prime
{
  private:
   int num;
  public:
  int setdata()
  {
      std :: cout<<"Enter a number to check for prime: "<< std :: endl;
      std :: cin >> num;
      
      return num;
  }
   void check(int n)
   {
       int count;
     for (int i=2;i<=n/2;i++)
     {
       if (n%i==0)
          count++;
         
     }
     if(num<=0)
      {
          std :: cout << "Please, Enter a positive integer!" << std :: endl;
      }
      else 
      {
       if (count<1) 
         std :: cout << n <<" is prime number."<< std :: endl;
       else
        std :: cout << n << " is not a prime number."<<std :: endl;
      }
   }  
   void ask()
   {
       char ch;
       std :: cout << "want another calculation?[Enter 'y' for yes and 'n' for no]"<< std :: endl;
       std :: cin >> ch;
       if (ch == 'y')
       {
        setdata();
        check(num);
        ask();
       }
       else
         std :: cout << "Thank you for checking!";
   }

};
int main()
{
    int c;
    char ch;
    prime d;
    c = d.setdata();
    d.check(c);
    d.ask();
    
    return 0;
}