#include <iostream>
#include <fstream>
using namespace std;

class library
{
    private:
     char bname[20];
     int bid;
     int n;
     int year,day,month;
    public:
     void getdata()
     {
         cout <<"Enter name of the book: "; cin >>bname;
         cout <<"Enter Book id: "; cin >>bid;
         cout <<"Enter no. of books: "; cin >>n;
         cout <<"Enter Purchase date: "; cin>>day>>month>>year;
     }
     void display()
     {
         cout <<"Book Name: "<<bname <<endl;
         cout <<"Book ID: "<<bid <<endl;
         cout <<"Number of books: "<<n <<endl;
         cout <<"Purchase Date: "<< year<<"/"<<month<<"/"<<day<<endl;
     }
     void read_record()
     {
         library b;
         fstream fout;
         fout.open("Book.dat",ios::binary | ios :: in);
         while(fout.read((char*)&b,sizeof(b)))
         {
           b.display(); 
         }
         fout.close();
     }
     void write_record()
     {
         library b;
         fstream fin;
         fin.open("Book.dat",ios::binary | ios :: out | ios :: app);
         cout <<"Enter the Information"<<endl;
         b.getdata();
         fin.write((char*)&b,sizeof(b));
         fin.close();
     }
};
int main()
{
    library l;
    l.write_record();
    l.read_record();
    return 0;
}