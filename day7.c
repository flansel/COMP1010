
/***********************************************
Author: Felix Ansell
Date: 9/23/19
Purpose: print the binary representation of a decimal number
***********************************************/
#include <stdio.h>

void printBinary(int n);

int main(int argc, char* argv[]){
	printBinary(43);
	return 0;
}

void printBinary(int n){
	if(n > 0){
		if(n%2 == 0){
			printBinary(n/2);
			printf("%d",0);
		}else{
			printBinary(n/2);
			printf("%d",1);
		}	
	}
}
