/*
 * Author: Felix Ansell 
 * Date: 9/25/19
 * The input is only limited by the max size of an int this is becuase ther
 * e is not stack overflow because function calls are not taking up more an
 * d more stack space.
 */

#include <stdio.h>

void loop_down_to_int(int input);
void loop_up_to_int(int input);

int main(int argc, char* argv[]){
	int input;
	printf("Enter a Number: ");
	scanf("%d", &input);
	loop_down_to_int(input);
	printf("****\n");
	loop_up_to_int(input);
	return 0;
}

void loop_down_to_int(int input){
	int i = input;
	while(i >= 0){
		printf("%d\n", i);
		i--;
	}
}

void loop_up_to_int(int input){
	int i = 0;
	while(i<=input){
		printf("%d\n", i);
		i++;
	}
}
