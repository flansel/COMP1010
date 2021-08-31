/***********************************************
Author: Felix Ansell
Date: 9/23/19
Answer to question: Stack Overflow
***********************************************/

#include <stdio.h>

int recurseUp(int n);
int recurseDown(int n);

int main(int argc, char* argv[]){
	recurseDown(10);
	printf("****\n");
	recurseUp(10);
}

int recurseDown(int n){
	if(n >= 0){
		printf("%d\n", n);
		recurseDown(n-1);
	}
	return 0;
}

int recurseUp(int n){
	if(n >= 0){
		recurseUp(n-1);
		printf("%d\n", n);
	}

	return 0;
}
