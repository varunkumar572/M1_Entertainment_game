# **SNAKE GAME**

_Difficuly : Easy_
***

## **Description**:
This Snake game is designed for entertainment. This is a basic snake game with no graphics. The Snake is designated with letter 'S' symbol. The food is designated With '@'(at the rate) symbol. This game is palyed with the keys(W,A,S,D) to move the snake up, left, down, right. The food is generated at random locations inside the boundaries and we have to eat that food to increase the score of 20. If the snake hits the boundary then the game is over.
---
## **Objectives**:
* The snake needs to take the food as much as it can.
* The snake wouldn't hit the boundaries.
---
### **Research Articles** :
[https://www.geeksforgeeks.org/snake-game-in-c/eeksforGeeks](https://www.geeksforgeeks.org/snake-game-in-c/ "GeekforGeeks")
[https://itsourcecode.com/free-projects/c-projects/snake-game-in-c-programming-with-source-code/](https://itsourcecode.com/free-projects/c-projects/snake-game-in-c-programming-with-source-code/ "Itsourcecode")

---
## **HIGH LEVEL REQUIREMENTS**
|ID|Description|Category|
|--|-----------|--------|
HLR01|The user must press the keys ('W','A','S','D') | Technical|
HLR02|Randomly place the food for snake|Technical|
HLR03|The snake hits the boundary then the game is over and go for next turn|Technical|
HLR04|The score is displayed after the game ends|Technical| 
---
##  **Low Level Requirements**
|ID|Description|Category|
|--|-----------|--------|
LLR01|By pressing the key 'W' the snake moves to top, By pressing the key 'A' the snake moves to left, By pressing the key 'S' the snake moves to bottom, By pressing the key 'D' the snake moves to right| Technical|
LLR02|The food is randomly placed within the boundaries by using `rand()` function|Technical|
LLR03|The boundaries are placed for the snake by using the user defined function `design()`|Technical|
LLR04|The score is increased by 20 with the intake of every food by snake and it displays your gaming level based on your score|Technical| 
---
## **SWOT Analysis**
### **Strengths**:
* The code must not break in any conditions.
* It is quick to respond with the keyboard keys.
* The tools required are vscode and wsl ubuntu for develping this project.
### **Weaknesses**:
* The user must press the keys('W','A','D','S') to start the game or else it won't start the game.
* The graphics are not included in this game.
### **Oppurtunities**:
* This project helps for the beginers of c programming.
* In further research the graphics functions are used to design this project.
### **Threats**:
* The system with a refresh rate of 40 FPS is required for this project.
---
## **4W's && 1H** :
### **WHO** :
* I am the only  person handling this project. I am the only person is responisible if any thing happens. 
### **WHAT** :
* I am developing a basic snake game for the purpose of entertainment. The snake game is deesigned by using C programing.
### **WHEN** :
* As I mentioned above, I am only handling this project and it will take one week to complete this snake game project.
### **WHERE** :
* The project is done in the visual studio code on my system and it is delivered to my github repository.
### **HOW** :
 * I am using C programming to complete this project. 
 * I am splitting this snake game into four parts as
   * _Gaming setup_ : The game is needs to be setup in the console. I this step all the gaming elements are   getting ready.
   * _Layout Design_ : The boundaries are created so that the snake can't go out of it. The sanke and food design will also be done here.
   * _User Input_ : The user is going to give the input by using the keys ('W','A','S','D'). By using the user input only the snake will move.
   * _Building Logic_ : Based on the user input only the snake will move from its position. If you give the input 'W', the snake will move upward by making Y-cordinate incrementing. If you give the input 'A', the snake will move to left by making X-cordinate decrementing. If you give the input 'S', the snake will move downward by making Y-cordinate decrementing. If you give the input 'D', the snake will move to right by making X-cordinate incrementing.