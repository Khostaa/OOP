#include <iostream>
using namespace std;
#define MAX 2
class Stack
{
    protected:
      int top;
      int st[MAX];
  public: 
   class Full{}; // exception class for full stack
   class Empty{}; // for empty stack
   Stack()
   {
       top = -1;
   }
   void push(int x)
   {
       if(top==MAX-1)
       {
           throw Full(); //if stack full throw exception
       }
       else
       {
           st[++top]=x;
       }   
   }
   int pop()
   {
       if(top==1)
         throw Empty(); //for empty stack
       else
          return st[top--]; 
   }
};
int main()
{
    Stack s;
    try
    {
       s.push(11);
       s.push(12);
       s.push(13);
       cout << "\n Number popped :"<< s.pop()<<endl;
       cout << "\n Number popped : " << s.pop()<<endl;
       cout << "\n Number popped : " << s.pop();
    }
    catch(Stack :: Full)
    {
        cout <<" \n Exception: Stack is full";
    }
    catch (Stack :: Empty)
    {
        cout << "Exception : Stack is empty.";
    }
    return 0;
}