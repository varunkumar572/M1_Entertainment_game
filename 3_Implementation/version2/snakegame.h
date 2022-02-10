/**
 * @file Snakegame.h
 * @author Varun Kumar (varunkumarkambhampati@gmail.com)
 * @brief This includes the header files of my snake game
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//Header Guard
#ifndef SNAKEGAME_H_
#define SNAKEGAME_H_

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>

int i, j;
int gameover, score;
int x, y, foodx, foody, flag;
// Function prototypes
/**
 * @brief game setup functions will set the boundaries for the snake to move.
 * 
 */
void gamesetup();
/**
 * @brief design function will design the snake and food for food.
 * 
 */
void design();
/**
 * @brief userinput function will help to select the direction for the snake.
 * 
 */
void userinput();
/**
 * @brief mover function will help to move the snake in user direction.
 * 
 */
void mover();
#endif