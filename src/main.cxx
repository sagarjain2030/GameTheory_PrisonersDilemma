#include<iostream>
#include "Competition/Competition.hxx"

#define ROUNDS 5

int main(int argc, char* argv[])
{
    std::cout<<"Prisoners Dilemma Problem"<<std::endl;
    Competition comp;
    for(int i = 0; i < ROUNDS; i++)
    {
        comp.runCompetition();
    }    
    comp.getResults();
    std::cout<<"End of Program"<<std::endl;
    char ch;
    std::cin>>ch;
    return 0;
}