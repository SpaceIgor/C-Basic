#include <iostream>
#include <string>


int main()
{
    std::cout << "Enter your full name: ";
    std::string myName;
    std::getline(std::cin, myName);
    
    std::cout << "Enter your age: ";
    int myAge;
    std::cin >> myAge;
    
    int letters = myName.length();
    double agePerLetter = static_cast<double>(myAge) / letters;
    std::cout << "You've lived " << agePerLetter << " years for each letter in your name.\n";
    

    return 0;
}
