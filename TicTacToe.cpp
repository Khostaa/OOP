#include <iostream>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player = 'X';
void rules()
{
    cout <<"-----Rules------"<<endl;
    cout<<"First player will have to go with X."<<endl;
}
void draw()
{
    for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
     }
}
void TogglePlayer()
{
    if(player == 'X')
       player = 'O';
    else
       player = 'X';
}
void input()
{
    int n;
    cout<<"Enter the position: ";
    cin>>n;
    if (n==1)
    {
        if(matrix[0][0] == '1')
            matrix[0][0]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==2)
    {
        if(matrix[0][1]== '2')
            matrix[0][1]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==3)
    {
        if(matrix[0][2]== '3')
            matrix[0][2]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==4)
    {
        if(matrix[1][0]== '4')
            matrix[1][0]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==5)
    {
        if(matrix[1][1]== '5')
            matrix[1][1]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==6)
    {
        if(matrix[1][2]== '6')
            matrix[1][2]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==7)
    {
        if(matrix[2][0]== '7')
            matrix[2][0]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==8)
    {
       if(matrix[2][1]== '8')
            matrix[2][1]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
    else if (n==9)
    {
        if(matrix[2][2]== '9')
            matrix[2][2]=player;
        else
          {
              cout<<"Position is Occupied."<<endl;
              input();
          }
    }
}
char check()
{
    for(int i=0;i<3;i++)
    {

       int j=0;
        if(matrix[i][j]=='X' && matrix[i][j+1]== 'X' && matrix[i][j+2] == 'X') //player 1 row check
            return 'X';
        else if(matrix[i][j]=='O' && matrix[i][j+1]== 'O' && matrix[i][j+2]=='O') //player 2 row check
             return 'O';
        if(matrix[j][i]=='X' && matrix[j+1][i]=='X' && matrix[j+2][i]=='X') //player 1 column check
             return 'X';
        else if(matrix[j][i]== 'O' && matrix[j+1][i]== 'O' && matrix[j+2][i]=='O') //player 2 column ckeck
             return 'O';
        else if(matrix[0][2]=='X' && matrix[1][1]== 'X' && matrix[2][0]=='X') // player 1 rt. diagonal check
           return 'X';
        else if(matrix[0][2]== 'O' && matrix[1][1]=='O' && matrix[2][0]=='O') //player 2 rt. diagonal check
           return 'O';
        else if(matrix[0][0]=='X' && matrix[1][1]== 'X' && matrix[2][2]=='X') //player 1 left diagonal check
           return 'X';
        else if(matrix[0][0]== 'O' && matrix[1][1]=='O' && matrix[2][2]=='O') //player 2 left diagonal check
           return 'O';
    }

  return 'f';

}
int main()
{
    int a=0;
    cout<<"~ Tic Tac Toe ~"<<endl<<endl;
    rules();
    cout<<endl;
    draw();
    cout<<endl;
    while(1)
     {
         a++;
         input();
         draw();
         if(check()=='X')
         {
             cout<<"congratulation! Player 1. You've won the game."<<endl;
             break;
         }
         else if(check()=='O')
         {
             cout<<"Congratulation! Player 2. You've won the game."<<endl;
             break;
         }
         else if(check()== 'f' && a==9)
         {
             cout<<"Game Drawn!"<<endl;
             break;
         }
         TogglePlayer();
     }

    return 0;
}
