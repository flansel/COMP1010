
/***********************************************
Author: Felix Ansell
Date: 9/30/19
Purpose: Continously prompts the user to enter a negative number until a number between 1-79 is entered then print that number of asterisks
Time Spent: ~7 min
***********************************************/

#include <stdio.h>

void clearBuffer();
int  draw_line(int num);

int main(int argc, char* argv[]){
	int x = 1;
	printf("Enter number of asterisks: ");
	scanf("%d", &x);
	clearBuffer();
	while(x >= 79 || x <= 1){
		printf("Sorry you must enter a number between [1-79]: ");
		scanf("%d",&x);
		clearBuffer();
	}
	draw_line(x);
	return 0;
}

int draw_line(int num){
	int i;
	for(i=0;i<num;i++){
		printf("*");
	}
	printf("\n");
}

void clearBuffer(){
	char c;
	scanf("%c", &c);
	while(c != '\n'){
		scanf("%c", &c);
	}
}
