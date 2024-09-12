#include "Competition.hxx"
#include <iostream>
#include <memory>
#include "../Strategy/alwaysCooperate.cxx"
#include "../Strategy/alwaysDefect.cxx"
#include "../Strategy/alwaysRandom.cxx"
#define TURNS 100 



Competition::Competition()
{
}


std::unique_ptr<strategyBase> Competition::getPlayer(int strategyIndex)
{
    switch(strategyIndex)
    {
        case 0:
            return std::make_unique<alwaysCooperate>();
        case 1:
            return std::make_unique<alwaysDefect>();
        case 2 : 
            return std::make_unique<alwaysRandom>();
    }
}

int Competition::strategyNameToStrategySymb(std::string name)
{
    if(name == "alwaysCooperate")
        return ALWAYSCOOPERATE;
    if(name == "alwaysDefect")
        return ALWAYSDEFECT;
    if(name == "alwaysRandom")
        return ALWAYSRANDOM;
}

void Competition::FillScoreMap(std::unique_ptr<strategyBase>& strat1, std::unique_ptr<strategyBase>& strat2, int score1, int score2)
{


}

// defect = 0
// cooperate = 1
void Competition::match(std::unique_ptr<strategyBase>& strat1, std::unique_ptr<strategyBase>& strat2)
{
    int score1 = 0;
    int score2 = 0;
    for(int i = 0; i < TURNS; i++)
    {
        int move1 = 0;
        int move2 = 0;

        if(i == 0)
            move1 = strat1->getFirstMove();
        else
            move1 = strat1->getMove(move2);
        
        move2 = strat2->getMove(move1);
        
        if(move1 == DEFECT && move2 == DEFECT)
        {
            score1 += 1;
            score2 += 1;
        }
        else if(move1 == DEFECT && move2 == COOPERATE)
        {
            score1 += 5;
            score2 += 0;
        }
        else if(move1 == COOPERATE && move2 == DEFECT)
        {
            score1 += 0;
            score2 += 5;
        }
        else if(move1 == COOPERATE && move2 == COOPERATE)
        {
            score1 += 3;
            score2 += 3;
        }
    }

    FillScoreMap(strat1,strat2,score1,score2);
}

void Competition::compete(int firstPlayerIndex, int secondPlayerIndex)
{
    std::unique_ptr<strategyBase> firstPlayer = getPlayer(firstPlayerIndex);
    std::unique_ptr<strategyBase> secondPlayer = getPlayer(secondPlayerIndex);
    match(firstPlayer, secondPlayer);
}


void Competition::runCompetition()
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            compete(i,j);
        }
    }
}




// void Competition::compete1()
// {
//     int totalStrategy = int(strategies.size());
//      std::cout<<"Inside compete totalStrategy = "<< totalStrategy <<"\n";
//     int player1 = (rand() % (totalStrategy - 0 + 1)) + 1;
//     int player2 = (rand() % (totalStrategy - 0 + 1)) + 1;
//     if(player1 == player2)
//       player2 = (rand() % (totalStrategy - 0 + 1));
    
//     std::string keyName = strategies[player1]->getName() + "_" + strategies[player2]->getName();
//     std::cout<<keyName<<std::endl;
//     char ch;
//     std::cin>>ch;
//     if(mapMatch.find(keyName) == mapMatch.end())
//     {
//         match(strategies[player1],strategies[player2]);
//         mapMatch[keyName] = 1;
//         std::string reverseKeyName = strategies[player2]->getName() + "_" + strategies[player1]->getName();
//         mapMatch[reverseKeyName] = 1;
//     }
// }

void Competition::getResults()
{
    for(auto &strat : strategies)
    {
        std::cout << "Strategy: " << strat->getName() << " Amount: " << strat->getAmount() << std::endl;
    }
}
