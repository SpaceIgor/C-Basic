#include<iostream>

int readNumber()
{
    std::cout << "Please enter an integer: ";
    int value;
    std::cin >> value; 
    return value;
}

void writeAnswer(int result)
{
    std::cout << result << std::endl;
}