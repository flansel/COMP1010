/***********************************************
Author: Felix Ansell
Date: 9/23/19
Purpose: Print the next number in a Collatz sequence givven a number
***********************************************/

#include <stdio.h>

int collatz(int n);

int main(int argc, char* argv[]){
	int n;
	printf("please enter a positive integer\n");
	scanf("%d", &n);
	printf("The value of the next number is: %d",collatz(n));
}

int collatz(int n){
	if(n%2 == 0){
		return n/2;
	}
	return n*3+1;
}
