#include<iostream>
#include "strategyBase.hxx"
class alwaysRandom : public strategyBase
{
    public:
        int amount= 0;
        int evenCount = 0;
        int oddCount = 0;
        int getMove(int& move)
        {
            int random = (rand() % (10 - 1 + 1)) + 1;
            if((random & 1) == 1)
            {
                return 1;
                oddCount++;
            }
            else
            {
                return 0;
                evenCount++;
            }
             
        }
        int getFirstMove()
        {
            int random = (rand() % (10 - 1 + 1)) + 1;
            if((random & 1) == 1)
            {
                return 1;
                oddCount++;
            }
            else
            {
                return 0;
                evenCount++;
            }
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
            return "alwaysRandom";
        }
};
