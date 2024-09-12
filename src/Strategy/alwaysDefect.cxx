#include<iostream>
#include "strategyBase.hxx"
class alwaysDefect : public strategyBase
{
    public:
        int getMove(int& move)
        {
            return DEFECT;
        }
        int getFirstMove()
        {
            return DEFECT;
        }
        std::string getName()
        {
            return "alwaysDefect";
        }
};
