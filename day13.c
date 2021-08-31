/***********************************************
Author: Felix Ansell
Date: 10/6/19
Purpose: Play a two player game of rock paper sissors using an enum
Time Spent: 10 min
***********************************************/

#include <stdio.h>
#include <ctype.h>

void rock_paper_sissors();
void clearbuffer();
int play_agian();

enum Choice{Rock, Paper, Sissors};
typedef enum Choice Choice;

int main(int argc, char* argv[]){
	rock_paper_sissors();
}
int get_choice(){
	char p1;
	scanf(" %c",&p1);
	clearbuffer();
	p1 = tolower(p1);
	while(p1 != 'r' && p1 != 'p' && p1 != 's'){
		printf("Sorry, you must enter 'r' 'p' or 's'");
		scanf(" %c", &p1);
		clearbuffer();
		p1 = tolower(p1);
	}
	if(p1 == 'r')
		return 0;
	else if(p1 == 'p')
		return 1;
	else 
		return 2;
}
void rock_paper_sissors(){
	printf("Player one enter (r)ock, (p)aper, or (s)issors");
	Choice p1 = get_choice();
	printf("PLayer two enter (ro)ock, (p)aper,or (s)issors");
	Choice p2 = get_choice();
	switch(p1){
	
	case Rock:
		if(p2 == Rock){
			printf("Rock and Rock, Tie!");
		}else if(p2 == Paper){
			printf("Paper covers Rock, Player 2 wins!");
		}else if(p2 == Sissors){
			printf("Rock crushes Sissors, Player 1 wins!");
		}
		break;
	case Paper:
		if(p2 == Rock){
			printf("Paper covers rock, Player 1 wins!");
		}else if(p2 == Paper){
			printf("Paper and Paper, Tie!");
		}else if(p2 == Sissors){
			printf("Sissors cut Paper, Player 2 wins!");
		}
		break;
	case Sissors:
		if(p2 == Rock){
			printf("Rock crushes Sissors,Player 2 wins!");
		}else if(p2 == Paper){
			printf("Sissors cut Paper, Player 1 wins!");
		}else if(p2 == Sissors){
			printf("Sissors and Sissors, Tie!");
		}
		break;
	default:
		break;
	}
	if(play_agian())
		rock_paper_sissors();
}
int play_agian(){
	char x;
	printf("\nPlay agian y/n");
	scanf(" %c", &x);
	clearbuffer();
	while(x != 'y' && x != 'n'){
		printf("Please enter y/n");
		scanf(" %c", &x);
		clearbuffer();
	}
	if(x == 'y'){
		return 1;
	}
	return 0;
}
void clearbuffer(){
	char x;
	scanf("%c", &x);
	while(x != '\n'){
		scanf("%c", &x);
	}
}
