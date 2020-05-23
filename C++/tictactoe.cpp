//Author : KayDee

#include<iostream>
#include<cstdlib>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

#define SIDE 3

#define P1 1
#define P2 2

#define P1_MOVE 'X'
#define P2_MOVE 'O'


void showBoard(char grid[][SIDE]){

printf("\t\t+---+---+---+\t\t+---+---+---+\n");
printf("\t\t+ 1 + 2 + 3 +\t\t| %c | %c | %c |\n",grid[0][0],grid[0][1],grid[0][2]);
printf("\t\t+---+---+---+\t\t+---+---+---+\n");
printf("\t\t+ 4 + 5 + 6 +\t\t| %c | %c | %c |\n",grid[1][0],grid[1][1],grid[1][2]);
printf("\t\t+---+---+---+\t\t+---+---+---+\n");
printf("\t\t+ 7 + 8 + 9 +\t\t| %c | %c | %c |\n",grid[2][0],grid[2][1],grid[2][2]);
printf("\t\t+---+---+---+\t\t+---+---+---+\n");
return;
}
void instructions(){
cout << "\t\tTic-Tac-Toe"<<endl;
cout<<"\n\n";
cout<<"Instructions :- Human vs Human TicTacToe. \nEnter the corresponding number(0-9) to place a move.\n";


printf("\t\t+---+---+---+\n");
printf("\t\t| 1 | 2 | 3 |\n");
printf("\t\t+---+---+---+\n");
printf("\t\t| 4 | 5 | 6 |\n");
printf("\t\t+---+---+---+\n");
printf("\t\t| 7 | 8 | 9 |\n");
printf("\t\t+---+---+---+\n");
return;

}
void initialise(char grid[][SIDE]){
for(int i = 0; i < SIDE;++i){
    for(int j = 0; j < SIDE;++j){
        grid[i][j] = ' ';
    }
}
return;
}

bool checkRow(char grid[][SIDE]){
for (int i = 0;i<SIDE;i++){
    if(grid[i][0]==grid[i][1]&&grid[i][1]==grid[i][2]&&grid[i][2]!=' ')
        return true;

}
return false;

}
bool checkColumn(char grid[][SIDE]){
for (int i = 0;i<SIDE;i++){
    if(grid[0][i]==grid[1][i]&&grid[1][i]==grid[2][i]&&grid[2][i]!=' ')
        return true;

}
return false;
}
bool checkDiagonal(char grid[][SIDE]){
if(grid[0][0]==grid[1][1]&&grid[1][1]==grid[2][2]&&grid[2][2]!=' ')
    return true;
if(grid[0][2]==grid[1][1]&&grid[1][1]==grid[2][0]&&grid[2][0]!=' ')
    return true;

return false;



}
bool winCondition(char grid[][SIDE]){
return checkRow(grid)||checkColumn(grid)||checkDiagonal(grid);
}

void play(int whoseTurn){
int m,moves=0;
instructions();
string p1,p2;
cout << "Enter the name of player 1 : ";
cin >> p1;
cout << "Enter the name of player 2 : ";
cin >> p2;
char grid[SIDE][SIDE];
initialise(grid);

while(winCondition(grid)==false && moves != SIDE*SIDE){
    if(whoseTurn == P1){
cout <<endl<< p1 << " :: Enter a move : ";
cin >> m;
if(grid[m/SIDE][m%SIDE-1] == ' ')
     grid[m/SIDE][m%SIDE-1] = P1_MOVE;
else exit(0);
moves++;
whoseTurn = P2;
showBoard(grid);
continue;
}


    if(whoseTurn == P2){
cout <<endl<< p2 << " :: Enter a move : ";
cin >> m;
if(grid[m/SIDE][m%SIDE-1] == ' ')
     grid[m/SIDE][m%SIDE-1] = P2_MOVE;
else exit(0);

moves++;
whoseTurn = P1;
showBoard(grid);
continue;

    }

}

if(winCondition(grid) == true && moves != SIDE*SIDE){
    if(whoseTurn == P1)
        cout << p2 << " won!\n";
    if(whoseTurn == P2)
        cout << p1 << " won!\n";
}
else cout << "It's a draw\n";


return;
}

int main(){

play(P1);

return 0;
}
