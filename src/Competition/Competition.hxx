#ifndef COMPETITION_H
#define COMPETITION_H

#include <vector>
#include "../Strategy/strategyBase.hxx"

class Competition
{
    std::vector<strategyBase*> strategies;


    public:
        Competition();
        
        void compete(strategyBase *strat1, strategyBase *strat2);
};

#endif // COMPETITION_H