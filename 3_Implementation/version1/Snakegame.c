/**
 * @file Snakegame.c
 * @author Varun Kumar (varunkumarkambhampati@gmail.com)
 * @brief This Snake game is designed for entertainment. This is a basic snake game with no graphics.
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, foodx, foody, flag;
/**
 * @brief game setup functions will set the boundaries for the snake to move.
 * 
 */
void gamesetup()
{
	gameover = 0;
	x = height / 2;
	y = width / 2;
while(1){
	foodx = rand() % 20;// creating x cordinate of food location
	if (foodx != 0)
		break;
}
while(1){
	foody = rand() % 20;// creating y cordinate of food location
	if (foody != 0)
		break;
}
score=0;		
}

/**
 * @brief design function will design the snake and food for food.
 * 
 */
void design()
{
	//regex expression is used to clear the output screen.
	 printf("\e[1;1H\e[2J");
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (i == 0 || i == width - 1
				|| j == 0
				|| j == height - 1) {
				printf("*");
			}
			else {
				if (i == x && j == y)
					printf("S");// 'S' is a snake.
				else if (i == foodx
						&& j == foody)
					printf("@");// '@' is food
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	printf("score = %d", score);
	printf("\n");
	printf("press X to quit the game\n");
	printf("Enter w,a,s,d keys and press enter \n");

}
/**
 * @brief userinput function will help to select the direction for the snake.
 * 
 */
void userinput()
{
	// getchar() function will help you to get user input at runtime.
		switch (getchar()) {
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
			gameover = 1;//game over condition
			break;
		}
}
/**
 * @brief mover function will help to move the snake in user direction.
 * 
 */
void mover()
{
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
		gameover = 1; // gameover condition.
	if (x == foodx && y == foody) {
	while(1){
	foodx = rand() % 20;
	if (foodx != 0)
		break;
}
	while(1){
	foody = rand() % 20;
	if (foody != 0)
		break;
}
		score += 20;
	}
}
/**
 * @brief Main function includes all the functions to design the game.
 * 
 */
void main()
{
	int m, n;
	gamesetup();
	while (!gameover) {
		design();
		userinput();
		mover();
	}
	/**
	 * @brief using score you will judge the player level.
	 * 
	 */
	if(score>=0 && score<100){
		printf("\nYou need to paly better\n");
	}
	else if(score>=100 && score<300){
		printf("\nYou are pro\n");
	}
	else{
		printf("\nYou are Legend\n");
}
}
