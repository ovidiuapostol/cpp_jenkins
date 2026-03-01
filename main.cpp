#include <iostream>
#define version 2

int i;

int main()
{
    std::cout << "----------------------"<< std::endl;
    std::cout<< "Greetings form your C++ Jenkins pipeline!"<< std::endl;
    std::cout<<"------------------------"<< std::endl;
    std::cout<<"version: " << version<<std::endl;
    for(i = 0; i < 5; i++)
    {
        std::cout<<"i = "<< i<<std::endl;
    }
    return 0;
}
