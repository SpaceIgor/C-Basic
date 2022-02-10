#include <iostream>

int main()
{
    std::cout << "Please enter an integer < 10"  << std::endl;
    int value;
    std::cin >> value ;
    
    if (value==2)
        std::cout << "The digit is prime" << std::endl;
    if (value==3)    
        std::cout << "The digit is prime" << std::endl;
    if (value==5)
        std::cout << "The digit is prime" << std::endl;
    if (value==7)
        std::cout << "The digit is prime" << std::endl;
    else
        std::cout << "The digit is not prime" << std::endl;
    return 0;    
}      