# GameTheory_PrisonersDilemma

## Introduction
This project is a simulation of the Prisoner's Dilemma game. The Prisoner's Dilemma is a standard example of a game analyzed in game theory that shows why two completely rational individuals might cooperate, even if it appears that it is not in their best interest to do so. I have been following youtube video [What Game Theory Reveals About Life, The Universe, and Everything](https://www.youtube.com/watch?v=mScpHTIi-kM) by [Veritasium] (https://www.youtube.com/@veritasium) and I was inspired to create this project.

## Rules
The rules of the game are simple. Two players are given the option to either cooperate or defect. The players make their decisions without knowing the decision of the other player. The end result is number of points they have earned.
1. If both players cooperate, they both receive 3 point. 
2. If one player cooperates and the other defects, the defector receives 5 points and the cooperator receives 0 points.
3. If both players defect, they both receive 1 point

## Trivia
Looking at the rules, it is clear that the best strategy is to defect. However, the best outcome for both players is to cooperate. This is the dilemma that the players face.

## How to run the code
1. You need to have cmake and gcc installed.
2. Clone the repository
3. Go to project directory and run the following commands
```bash
mkdir build
cmake -B .\build\ -G "Unix Makefiles"
make
```
4. Go to build directory. There you will find exe created. Run the exe.
5. Since there has been some issue with exe not finding dll as issue 1, you can run copy.bat file
6. Open the build\bin directory and run the exe.

## Future Work
1. Add more strategies
2. Run stategies in threads and Check which are the best strategies to play the game.

