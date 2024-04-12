#include<iostream>
#include "strategyBase.hxx"
class alwaysCooperate : public strategyBase
{
    public:
        int amount;
        int getMove(int& move)
        {
            return 1;
        }
        int getFirstMove()
        {
            return 1;
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
            return "AlwaysCooperate";
        }
};