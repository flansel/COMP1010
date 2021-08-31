/***********************************************
Author: Felix Ansell
Date: 9/30/19
Purpose: Continously prompts the user to enter a negative number until a negative number is entered
Time Spent: ~7 min
***********************************************/

#include <stdio.h>

void clearBuffer();

int main(int argc, char* argv[]){
	int x = 1;
	printf("Enter a negative number: ");
	scanf("%d", &x);
	clearBuffer();
	while(x >= 0){
		printf("Sorry you must enter a negative number: ");
		scanf("%d",&x);
		clearBuffer();
	}
	printf(" The negative number was %d ", x);
	return 0;
}

void clearBuffer(){
	char c;
	scanf("%c", &c);
	while(c != '\n'){
		scanf("%c", &c);
	}
}
