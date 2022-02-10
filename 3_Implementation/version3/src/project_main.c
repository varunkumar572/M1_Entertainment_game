/**
 * @file project_main.c
 * @author Varun Kumar (varunkumarkambhampati@gmail.com)
 * @brief This Snake game is designed for entertainment. This is a basic snake game with no graphics.
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "snakegame.h"
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