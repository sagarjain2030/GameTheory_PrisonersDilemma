#include<iostream>
#include "Strategy/strategyBase.hxx"
#include "Strategy/alwaysCooperate.cxx"
#include "Strategy/alwaysDefect.cxx"
#include "Competition/Competition.hxx"

int main(int argc, char* argv[])
{
    std::cout<<"Prisoners Dilemma Problem"<<std::endl;
    strategyBase *strat1 = new alwaysCooperate();
    strategyBase *strat2 = new alwaysDefect();
    Competition comp;
    comp.compete(strat1, strat2);
    std::cout<<"Always Cooperate: "<<strat1->getAmount()<<std::endl;
    std::cout<<"Always Defect: "<<strat2->getAmount()<<std::endl;
    delete strat1;
    delete strat2;
    std::cout<<"End of Program"<<std::endl;
    char ch;
    std::cin>>ch;
    return 0;
}