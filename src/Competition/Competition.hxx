#ifndef COMPETITION_H
#define COMPETITION_H

#include <vector>
#include <unordered_map>
#include "../Strategy/strategyBase.hxx"

class Competition
{
    std::unordered_map<int, int> mapStrategyScore;
    std::unordered_map<std::string,int> mapMatch;

    public:
        Competition();
        void runCompetition();
        void compete(int firstPlayerIndex, int secondPlayerIndex);
        std::unique_ptr<strategyBase> getPlayer(int strategyIndex);
        void compete1();
        void getResults();
        void match(std::unique_ptr<strategyBase>& strat1, std::unique_ptr<strategyBase>& strat2);
        void FillScoreMap(std::unique_ptr<strategyBase>& strat1, std::unique_ptr<strategyBase>& strat2, int score1, int score2);
};

#endif // COMPETITION_H