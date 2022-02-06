#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
#include <unistd.h>
int i, j, height = 40, width = 40;
int gameover, score;
int x, y, foodx, foody, flag;
void gamesetup()
{
	gameover = 0;
	x = height / 2;
	y = width / 2;
while(1){
	foodx = rand() % 40;
	if (foodx != 0)
		break;
}
while(1){
	foody = rand() % 40;
	if (foody != 0)
		break;
}
score=0;		
}
void design()
{
	system("cls");
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (i == 0 || i == width - 1
				|| j == 0
				|| j == height - 1) {
				printf("*");
			}
			else {
				if (i == x && j == y)
					printf("S");
				else if (i == foodx
						&& j == foody)
					printf("@");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	printf("score = %d", score);
	printf("\n");
	printf("press X to quit the game");
}
void userinput()
{
	if (kbhit()) {
		switch (getch()) {
		case 'a':
			flag = 1;
			break;
		case 's':
			flag = 2;
			break;
		case 'd':
			flag = 3;
			break;
		case 'w':
			flag = 4;
			break;
		case 'x':
			gameover = 1;
			break;
		}
	}
}
void mover()
{
	sleep(0.1);
	switch (flag) {
	case 1:
		y--;
		break;
	case 2:
		x++;
		break;
	case 3:
		y++;
		break;
	case 4:
		x--;
		break;
	default:
		break;
	}
	if (x < 0 || x > height
		|| y < 0 || y > width)
		gameover = 1;
	if (x == foodx && y == foody) {
	while(1){
	foodx = rand() % 40;
	if (foodx != 0)
		break;
}
	while(1){
	foody = rand() % 40;
	if (foody != 0)
		break;
}
		score += 20;
	}
}
void main()
{
	int m, n;
	gamesetup();
	while (!gameover) {
		design();
		userinput();
		mover();
	}
	if(score>0 && score<100){
		printf("\nYou need to paly better\n");
	}
	else if(score>=100 && score<300){
		printf("\nYou are pro\n");
	}
	else{
		printf("\nYou are Legend\n");
}
}
