#include<iostream>
#include "strategyBase.hxx"
class alwaysCooperate : public strategyBase
{
    public:
        int getMove(int& move)
        {
            return COOPERATE;
        }
        int getFirstMove()
        {
            return COOPERATE;
        }
        std::string getName()
        {
            return "alwaysCooperate";
        }
};