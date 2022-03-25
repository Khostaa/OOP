
#include <iostream>
 namespace square
 {
     int num; 
     int fun (int n)
     {
       return n*n;
     }
 }
 namespace cube
 {
     int num;
     int fun(int n)
     {
        return n*n*n;
     }
 }
 int main()
 {
  std :: cout << "Enter the vaules of num for square and cube nums: ";
  std :: cin >> square :: num >> cube :: num;
  std :: cout << "Cube = " << cube :: fun(square :: num)<<std :: endl;
  std :: cout << "Square = " << square :: fun(cube :: num)<<std :: endl;
  return 0;
 }