#include<iostream>
#include "Competition/Competition.hxx"

int main(int argc, char* argv[])
{
    std::cout<<"Prisoners Dilemma Problem"<<std::endl;
    Competition comp;
    std::cout<<"created comp object"<<std::endl;
    for(int i = 0; i < 10; i++)
    {
        comp.compete();
    }    
    comp.getResults();
    std::cout<<"End of Program"<<std::endl;
    char ch;
    std::cin>>ch;
    return 0;
}