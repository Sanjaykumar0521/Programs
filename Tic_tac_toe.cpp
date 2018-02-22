#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
char ttt_matrix[3][3];
class TTT
{
  public:
 TTT(){}
 void disp_matrix();
 void init_matrix();
  void ai_input();
 char check_win();
};

void TTT::ai_input()
  {
    int i, j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++)
     if(ttt_matrix[i][j]==' ') break;
     if(ttt_matrix[i][j]==' ') break;
  }

  if(i*j==9)  {
    cout<<"draw\n";
    exit(0);
  }
  else
    ttt_matrix[i][j] = 'O';
}

//member function to check winner
char TTT::check_win()
{
   int i;
/* check rows */
  for(i=0; i<3; i++)
    if(ttt_matrix[i][0]==ttt_matrix[i][1] &&
       ttt_matrix[i][0]==ttt_matrix[i][2]) return ttt_matrix[i][0];
/* check columns */
  for(i=0; i<3; i++)
    if(ttt_matrix[0][i]==ttt_matrix[1][i] &&
       ttt_matrix[0][i]==ttt_matrix[2][i]) return ttt_matrix[0][i];

  /* test diagonals */
  if(ttt_matrix[0][0]==ttt_matrix[1][1] &&
     ttt_matrix[1][1]==ttt_matrix[2][2])
       return ttt_matrix[0][0];

  if(ttt_matrix[0][2]==ttt_matrix[1][1] &&
     ttt_matrix[1][1]==ttt_matrix[2][0])
       return ttt_matrix[0][2];

  return ' ';
 }

//display matrix
void TTT::disp_matrix()
{
  int t;

  for(t=0; t<3; t++)
{
    cout<<" "<<ttt_matrix[t][0]<<" | "<<ttt_matrix[t][1]<<" | "<<ttt_matrix[t][2];
    if(t!=2)
    cout<<"\n---|---|---\n";
  }
  cout<<"\n";
}

//initializing the matrix
void TTT::init_matrix()
{  int i, j;

  for(i=0; i<3; i++)
   { for(j=0; j<3; j++)
       {ttt_matrix[i][j] =  ' '; }
    }
}

//clas game inherit class TTT
class game:public TTT
{
public:
 void user_input();
};

void game::user_input()
{
  int i, j;

  cout<<"Enter X,Y coordinates for your move: ";
  cin>>i>>j;

  i--; j--;

  if(ttt_matrix[i][j]!= ' '){
    cout<<"Invalid move, try another place.\n";
    ai_input();
  }
  else ttt_matrix[i][j] = 'X';
}


//main function
int main()
{
 char done =  ' ';
 game g;
 TTT t;
 t.init_matrix();
  do {
    t.disp_matrix();
    g.user_input();
    done = t.check_win();
    if(done!= ' ') break;
    t.ai_input();
    done = t.check_win();
  } while(done== ' ');

  if(done=='X')
  cout<<"You won the game \n";
  else
  cout<<"AI so stupid still can win against you..."<<endl;
  t.disp_matrix();

return 0;
}



