#ifndef COMPETITION_H
#define COMPETITION_H

#include "../Strategy/strategyBase.hxx"

class Competition
{
    public:
        static void compete(strategyBase *strat1, strategyBase *strat2);
};

#endif // COMPETITION_H