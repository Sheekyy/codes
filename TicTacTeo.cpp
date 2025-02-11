#include <iostream>
#include  <ctime>


using namespace std;
void board(char *spaces);
void playerMove(char *spaces, char player);
void playerTwo(char *spaces, char computeer );
bool winner(char *spaces, char player, char coputer);	

int main(){
	char spaces[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char player = 'X';
	char computer = 'O';
	bool running = true;
	cout<<"***********************\n";
	cout<<"***********************\n";
	cout<<"*** TIC * TAC * TOE ***\n";
	cout<<"***********************\n";
	cout<<"***********************\n";
		board(spaces);
	
	while(running){
		playerMove(spaces,player);
		board(spaces);
		if(winner(spaces,player,computer)){
			running = false;
			break;
		}
		playerTwo(spaces,computer);
		board(spaces);
		if(winner(spaces,player,computer)){
			running = false;
			break;
		}
	}
}
void board(char *spaces){
	cout<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"   "<< spaces[0] <<" |   "<< spaces[1] <<" |   "<< spaces[2] <<"   "<<endl;
	cout<<"_____|_____|_____ "<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"   "<< spaces[3] <<" |   "<< spaces[4] <<" |   "<< spaces[5] <<"   "<<endl;
	cout<<"_____|_____|_____ "<<endl;
	cout<<"   "<< spaces[6] <<" |   "<< spaces[7] <<" |   "<< spaces[8] <<"   "<<endl;
	cout<<"     |     |     "<<endl;
	cout<<endl;	
}
void playerMove(char *spaces, char player){
	int num;
	do{
		cout<<"PLAYER 1\n";
		cout<<"Enter a spot to place a marker (1-9)";
		
		cin>> num;
		num--;
		cout<<"************************************"<<endl;
		cout<<"Player 1 moves\n";
		if(spaces[num] == ' '){
			spaces[num] = player;
			break;
		}
	}while( !num > 0 || !num <8);
}
void playerTwo(char *spaces, char computer ){
	int num;
	do{
		cout<<"PLAYER 2\n";
		cout<<"Enter a spot to place a marker (1-9)";
		
		cin>> num;
		num--;
		cout<<"************************************"<<endl;
		cout<<"Player 2 moves\n";
		if(spaces[num] == ' '){
			spaces[num] = computer;
			break;
		}
	}while( !num > 0 || !num <8);
}
bool winner(char *spaces, char player, char coputer){
	if((spaces[0]!= ' ') && (spaces[0]) == (spaces[1]) && (spaces[1] == spaces[2])){
		spaces[0]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else if((spaces[3]!= ' ') && (spaces[3]) == (spaces[4]) && (spaces[4] == spaces[5])){
		spaces[3]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else if((spaces[6]!= ' ') && (spaces[6]) == (spaces[7]) && (spaces[7] == spaces[8])){
		spaces[6]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}	
		else if((spaces[0]!= ' ') && (spaces[0]) == (spaces[3]) && (spaces[3] == spaces[6])){
		spaces[0]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else if((spaces[1]!= ' ') && (spaces[1]) == (spaces[4]) && (spaces[4] == spaces[7])){
		spaces[1]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else if((spaces[2]!= ' ') && (spaces[2]) == (spaces[5]) && (spaces[5] == spaces[8])){
		spaces[2]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else if((spaces[3]!= ' ') && (spaces[3]) == (spaces[4]) && (spaces[4] == spaces[5])){
		spaces[0]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else if((spaces[0]!= ' ') && (spaces[0]) == (spaces[4]) && (spaces[4] == spaces[8])){
		spaces[0]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else if((spaces[6]!= ' ') && (spaces[6]) == (spaces[4]) && (spaces[4] == spaces[2])){
		spaces[6]== player ? std::cout<<"YOU WON\n" :  std ::cout<<"YOU LOST\n";
}
		else {
			return false;
		}
		return true;
}