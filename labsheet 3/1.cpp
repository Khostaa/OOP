/* Write a simple program that converts the temperature in Celsius scale to Fahrenheit scaleand vice versa 
  using the basic concept of class and object. Make separate classes for Celsiusand Fahrenheit which will 
  have the private members that hold the temperature value and make conversion functions in each class 
 for conversion from one to another. For example, you need to have a  function toFahrenheit()
 in class Celsius that converts to Fahrenheit scale and returns the value.*/
#include <iostream>
class Celsius
{
    private:
      float tc;
    public:
    float setdata()
    {
       std :: cout<< "Enter temperature in celsius: " << std :: endl;
        std :: cin>> tc;
        return tc;
    }
    void toFahrenheit(float a)
    {
      float result;
      result=(9*a+160)/5;
      std :: cout << a << " converted to Fahrenheit is: " <<result<< std:: endl ;
   
    }

};
class Fahrenheit 
{
    private:
     float tf;
    public:
    float setdata()
    {
        std :: cout <<"Enter temperature in Fahrenheit:"<< std:: endl;
        std :: cin >> tf;
        return tf;
    }
    void toCelsius(float b)
    {
        float res;
        res= (5* (b-32))/9;
        std :: cout << b <<" Converted to celsius is: "<<res << std :: endl;
        

    }
};
int main()
{
    float t;
    Celsius c1;
    t=c1.setdata();
    c1.toFahrenheit(t);
    
    float f;
    
    Fahrenheit f1;
    f = f1.setdata();
    f1.toCelsius(f);
    
    
    return 0;
}