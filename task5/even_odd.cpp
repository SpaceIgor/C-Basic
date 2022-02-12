#include <iostream>

bool isEven(int value)
{
    return (value % 2) ==0;
}

int main()
{
    std::cout << "Please enter an integer" << std::endl;
    int value;
    std::cin >> value;
    
    if (isEven(value))
        std::cout << value << " is even\n";
    else
        std::cout << value << " is odd\n";
        
    return 0;   
}   
