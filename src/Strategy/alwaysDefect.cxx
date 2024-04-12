#include<iostream>
#include "strategyBase.hxx"
class alwaysDefect : public strategyBase
{
    public:
        int amount;
        int getMove(int& move)
        {
            return 0;
        }
        int getFirstMove()
        {
            return 0;
        }
        void setAmount(int amt)
        {
            this->amount = amt;
        }
        int getAmount()
        {
            return this->amount;
        }
        std::string getName()
        {
            return "AlwaysDefect";
        }
};
