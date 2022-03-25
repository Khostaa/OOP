#include <iostream>
using namespace std;
struct date
{
    int dd;
    int mm;
    int yy;
};
void display(date);

int main()
{
    struct date d;
    cout << "Enter year,month and day" <<endl;
    cin >> d.yy >> d.mm >> d.dd;
    display(d);
    return 0;
}
void display(struct date d)
{
  cout <<d.mm<<"/"<<d.dd<<"/"<<d.yy;  
}