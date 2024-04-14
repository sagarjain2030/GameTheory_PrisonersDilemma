#ifndef COMPETITION_H
#define COMPETITION_H

#include <vector>
#include <unordered_map>
#include "../Strategy/strategyBase.hxx"

class Competition
{
    std::vector<strategyBase*> strategies;
    std::unordered_map<std::string,int> mapMatch;

    public:
        Competition();
        void compete();
        void getResults();
        void match(strategyBase *strat1, strategyBase *strat2);
};

#endif // COMPETITION_H