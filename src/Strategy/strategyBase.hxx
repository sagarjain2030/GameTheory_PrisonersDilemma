#ifndef STRATEGYBASE_H
#define STRATEGYBASE_H

#include <string>

typedef enum
{
    DEFECT,
    COOPERATE
}Choices;

typedef enum
{
    ALWAYSCOOPERATE,
    ALWAYSDEFECT,
    ALWAYSRANDOM
}Strategy;

class strategyBase
{
    public:
    virtual int getMove(int &move1) = 0;
    virtual int getFirstMove() = 0;
    virtual std::string getName() = 0;
};

#endif //STRATEGYBASE_H