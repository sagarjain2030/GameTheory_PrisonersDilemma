#include "Competition.hxx"


Competition::Competition()
{    
}

// defect = 0
// cooperate = 1
void Competition::compete(strategyBase *strat1, strategyBase *strat2)
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