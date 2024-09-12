#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

//!..Computer Move........
char GetComputerMove(){
    int move;
    //..Random Move Between 0 - 2.....
    srand(time(NULL));
    move = rand() % 3;

    if(move == 0){
        return 'p';
    }
    else if(move == 1){
        return 's';
    }
    else{
        return 'r';
    }
}

//!...Game On....
int GetResult(char Player, char Computer){
    if(Player == Computer){
        return 0;
    }

    if(Player == 's' && Computer == 'p'){
        return 1;
    }

    if(Player == 's' && Computer == 'r'){
        return -1;
    }

    if(Player == 'p' && Computer == 'r'){
        return 1;
    }

    if(Player == 'p' && Computer == 's'){
        return -1;
    }

    if(Player == 'r' && Computer == 'p'){
        return 1;
    }

    if(Player == 'r' && Computer == 's'){
        return -1;
    }
    return 0;
}

//--DRIVER CODE-------
int main() {
    char Player;

    cout<< "\n\n\n\t\tWelcome To Rock-Paper-Scissor"
            "Game\n";
    
    cout<< "\n\t\tEnter R-Rock, P-Paper, S-Scissor\n\t\t\t\t\t";

//!...Player Input......
    while(1) {
        cin>>Player;
        if(Player == 'p' || Player == 'r' || Player == 's'){
            break;
        }
        else{
            cout<< "\t\t\tInvalid Player Move! Please Try Again!" <<endl;
        }
    }

    char Computer = GetComputerMove();

    int result = GetResult(Player, Computer);

    if(result == 0){
        cout<< "\n\t\t\tGame Draw!\n";
    }

    else if(result == 1){
        cout<< "\n\t\t\tCongratulations! Player Won!\n";
    }

    else {
        cout<< "\n\t\t\tOh! Computer Won!\n";
    }

//!...Display Moves...
    cout<< "\t\t\t Your Move: "<<Player << endl;
    cout<< "\t\t\t Computer Move: "<<Computer << endl;
    
    return 0;
}