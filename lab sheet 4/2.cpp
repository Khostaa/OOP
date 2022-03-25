#include<iostream>
#include<cstring>
using namespace std;

class dyna
{
    char*arr;
public:
    dyna(char*input)
    {
        arr=new char[strlen(input)];
        strcpy(arr,input);
    }
    void join(dyna&a,dyna&b )
    {
        int l1=strlen (a.arr);
        int l2=strlen (b.arr);
        delete []arr;
        arr=new char [l1+l2+1];
        int i=0;


    while(l1<l2)
    {
        arr [i]=a.arr[i];
        i++;
    }
    while(i<l1+l2)
    {
        arr[i]=b.arr[i-l1];
        ++i;
    }
    arr[l1+l2]='\0';
    }
    void show()
    {
        cout<<arr<<endl;
    }
    ~dyna()
     {
         delete[]arr;
    }

};
main()
{
    char c1[]="Engineers are";
    char c2[]="creatures of logic";
    char c3[]=" ";
    dyna lt(c1);
    dyna yt(c2);
    dyna t1(c3);
    t1.join(lt,yt);
    t1.show();
    return 0;

}