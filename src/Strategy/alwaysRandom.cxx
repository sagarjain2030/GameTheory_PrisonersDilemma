#include<iostream>
#include "strategyBase.hxx"
class alwaysRandom : public strategyBase
{
    public:
        int evenCount = 0;
        int oddCount = 0;
        int getMove(int& move)
        {
            int random = (rand() % (10 - 1 + 1)) + 1;
            if((random & 1) == 1)
            {
                return COOPERATE;
                oddCount++;
            }
            else
            {
                return DEFECT;
                evenCount++;
            }
             
        }
        int getFirstMove()
        {
            int random = (rand() % (10 - 1 + 1)) + 1;
            if((random & 1) == 1)
            {
                return COOPERATE;
                oddCount++;
            }
            else
            {
                return DEFECT;
                evenCount++;
            }
        }
        std::string getName()
        {
            return "alwaysRandom";
        }
};
