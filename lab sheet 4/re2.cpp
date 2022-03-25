#include <iostream>
#include <cstring>
class dma
{
    private :
     char*arr ;
    public :
 
     dma(char*input) //passes addresss of string as argument
     {

         arr = new char[strlen(input)]; //dynamically allocates memory for array of size of input
         strcpy(arr,input); //copies string from input  to arr.
     }
  
      void join(dma &a,dma &b)
      {
          int l1 =strlen(a.arr); //length of string a = 13
          int l2 = strlen(b.arr); //length of string b = 18
          delete [] arr; //release dynamically allocated memory
          arr = new char[l1+l2 +1]; //dynamically allocates memory to accomodate both string
        /*  
         strcpy(arr,a.arr); //copies string a to arr.
         strcat(arr,b.arr);  //concatenates string b to arr.
         [upper two lines are alternatives for below codes of this function] 
         */
        int i=0; 
        while (i<l1) //values of i =0,1,2 ......12
          {
              arr[i]=a.arr[i]; //copies word by word every letter of string a
              i++;  //values of i++ = 1,2,3.........13
          }
          
          while(i<l1+l2)  //values of i= 13,14,......30
          {
              arr[i]=b.arr[i-l1]; //copies word by word every letter of string b //l1=13
                       //values of i-l1 = 13-13,14-13,15-13,...,30-13
              ++i; //values of ++i = 13,14,.......,31
          }
          arr[i]='\0'; //ends string with null character

      }
      void show()
      {
          std :: cout << arr << std:: endl;
      }
      ~dma() //destructor
      {
          delete [] arr; //releases dynamically allocated memory 
      }


};
int main()
{
    char s1[]="Engineers are";
    char s2[]="Creatures of logic";
    char s3[] = " ";
    //consturctor invoked
    dma d1(s1); // passes string s1 to parameterized dma constructor 
    dma d2(s2); // passes string s2 to parameterized dma constructor
    dma d(s3); // passes string s3 to parameterized dma constructor

    d.join(d1,d2); //string passed to function to contenate
    d.show(); //displaying input 
    return 0;

}