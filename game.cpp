#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getComputerMove()
{
    int move;
    srand(time(NULL));
    move =rand()%3;
    if (move==0) return 'p';
    if (move==1) return 's';
    if (move==2) return 'r';
}
int getResults (char playerMove, char computerMove)
{
    if (playerMove==computerMove) return 0;
    if (playerMove=='s'&&computerMove=='p') return 1;
    if (playerMove=='s'&&computerMove=='r') return -1;
    if (playerMove=='p'&&computerMove=='s') return -1;
    if (playerMove=='p'&&computerMove=='r') return 1;
    if (playerMove=='r'&&computerMove=='s') return 1;
    if (playerMove=='r'&&computerMove=='p') return -1;
    return 0;
}
int main ()
{
    char playerMove;
    cout<<"Welcome to Rock Paper Scissors!"<<endl;
    cout<<"Enter p for PAPER, s for SCISSORS and r for ROCK:"; cin>>playerMove;
    if (playerMove!='p'&&playerMove!='s'&&playerMove!='r') {
        cout<<"Invalid Player Move!"<<endl;
        return 0;
    }
   char computerMove=getComputerMove();
   cout<<"Your move: "<<playerMove<<endl;
   cout<<"Computer's move: "<<computerMove<<endl;
   int result=getResults(playerMove,computerMove);
   if (result==0){
        cout<<"Draw!"<<endl;
   }
   if (result==1) {
        cout<<"Congratulations, you won!"<<endl;
   }
   if (result==-1) {
        cout<<"What a pity, you lost!"<<endl;
   }
   return 0;
}
