/***********************************************
Author: Felix Ansell
Date: 10/6/19
Purpose: Play a two player game of rock paper sissors
Time Spent: 10 min
***********************************************/

#include <stdio.h>
void rock_paper_sissors();
void clearbuffer();

int main(int argc, char* argv[]){
	rock_paper_sissors();
}

void rock_paper_sissors(){
	char p1;
	char p2;
	printf("Player 1 its your turn!\nChoose (r)ock, (paper),or (s)issors");
	scanf(" %c",&p1);
	clearbuffer();
	while(p1 != 'r' && p1 != 'p' && p1 != 's'){
		printf("Sorry, you must enter 'r' 'p' or 's'");
		scanf(" %c", &p1);
		clearbuffer();
	}
	printf("Player 2 its your turn!\nChoose (r)ock, (paper),or (s)issors");
	scanf(" %c",&p2);
	clearbuffer();
	while(p2 != 'r' && p2 != 'p' && p2 != 's'){
		printf("Sorry, you must enter 'r' 'p' or 's'");
		scanf(" %c", &p2);
		clearbuffer();
	}
	switch(p1){
	
	case 'r':
		if(p2 == 'r'){
			printf("Rock and Rock, Tie!");
		}else if(p2 == 'p'){
			printf("Paper covers Rock, Player 2 wins!");
		}else if(p2 == 's'){
			printf("Rock crushes Sissors, Player 1 wins!");
		}
		break;
	case 'p':
		if(p2 == 'r'){
			printf("Paper covers rock, Player 1 wins!");
		}else if(p2 == 'p'){
			printf("Paper and Paper, Tie!");
		}else if(p2 == 's'){
			printf("Sissors cut Paper, Player 2 wins!");
		}
		break;
	case 's':
		if(p2 == 'r'){
			printf("Rock crushes Sissors,Player 2 wins!");
		}else if(p2 == 'p'){
			printf("Sissors cut Paper, Player 1 wins!");
		}else if(p2 == 's'){
			printf("Sissors and Sissors, Tie!");
		}
		break;
	default:
		break;
	}

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
		rock_paper_sissors();
	}

}

void clearbuffer(){
	char x;
	scanf("%c", &x);
	while(x != '\n'){
		scanf("%c", &x);
	}
}
