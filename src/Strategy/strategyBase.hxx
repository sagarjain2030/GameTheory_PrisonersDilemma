#ifndef STRATEGYBASE_H
#define STRATEGYBASE_H

class strategyBase
{
    public:
    virtual void setAmount(int amount) = 0;
    virtual int getAmount() = 0;
    virtual int getMove(int &move1) = 0;
    virtual int getFirstMove() = 0;
    virtual std::string getName() = 0;
};

#endif //STRATEGYBASE_H