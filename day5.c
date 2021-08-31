#include <stdio.h>

void drawSmile(void);

int main(int argc, char* argv[]){
	int i;
	for(i = 0; i<3;i++){
		drawSmile();
	}
	return 0;
}

void drawSmile(void){
	printf("  XXXX    \n");
	printf(" X . .X  \n");
	printf("X      X \n");
	printf("X  \\_/ X \n");
	printf(" X    X  \n");
	printf("  XXXX   \n\n");
}
