#include "Competition.hxx"
#include <iostream>
#include <memory>
#include "../Strategy/alwaysCooperate.cxx"
#include "../Strategy/alwaysDefect.cxx"
#include "../Strategy/alwaysRandom.cxx"

Competition::Competition()
{
    std::unique_ptr<strategyBase> p1 = std::make_unique<alwaysCooperate>();
    std::unique_ptr<strategyBase> p2 = std::make_unique<alwaysDefect>();
    std::unique_ptr<strategyBase> p3 = std::make_unique<alwaysRandom>();
    strategies.push_back(p1.get());
    strategies.push_back(p2.get());
    strategies.push_back(p3.get());
}

void Competition::compete()
{
    std::cout<<"Inside compete\n";
    int totalStrategy = int(strategies.size());
     std::cout<<"Inside compete totalStrategy = "<< totalStrategy <<"\n";
    int player1 = (rand() % (totalStrategy - 0 + 1)) + 1;
    int player2 = (rand() % (totalStrategy - 0 + 1)) + 1;
    if(player1 == player2)
      player2 = (rand() % (totalStrategy - 0 + 1));
    
    std::string keyName = strategies[player1]->getName() + "_" + strategies[player2]->getName();
    std::cout<<keyName<<std::endl;
    char ch;
    std::cin>>ch;
    if(mapMatch.find(keyName) == mapMatch.end())
    {
        match(strategies[player1],strategies[player2]);
        mapMatch[keyName] = 1;
        std::string reverseKeyName = strategies[player2]->getName() + "_" + strategies[player1]->getName();
        mapMatch[reverseKeyName] = 1;
    }
}

void Competition::getResults()
{
    for(auto &strat : strategies)
    {
        std::cout << "Strategy: " << strat->getName() << " Amount: " << strat->getAmount() << std::endl;
    }
}

// defect = 0
// cooperate = 1
void Competition::match(strategyBase *strat1, strategyBase *strat2)
{
    int score1 = 0;
    int score2 = 0;
    for(int i = 0; i < 200; i++)
    {
        int move1 = 0;
        int move2 = 0;

        if(i == 0)
            move1 = strat1->getFirstMove();
        else
            move1 = strat1->getMove(move2);
        
        move2 = strat2->getMove(move1);
        
        if(move1 == 0 && move2 == 0)
        {
            score1 += 1;
            score2 += 1;
        }
        else if(move1 == 0 && move2 == 1)
        {
            score1 += 5;
            score2 += 0;
        }
        else if(move1 == 1 && move2 == 0)
        {
            score1 += 0;
            score2 += 5;
        }
        else if(move1 == 1 && move2 == 1)
        {
            score1 += 3;
            score2 += 3;
        }
    }
    strat1->setAmount(strat1->getAmount() + score1);
    strat2->setAmount(strat2->getAmount() + score2);
}