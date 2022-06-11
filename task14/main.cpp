#include <iostream>
#include <string>

enum class Animals
{
  PIG,
  CHICKEN,
  GOAT,
  CAT,
  DOG,
  OSTRICH,
};

std::string getAnimalName(Animals animals)
{
    switch(animals)
    {
        case Animals::PIG:
            return "pig";
        case Animals::CHICKEN:
            return "chicken";
        case Animals::GOAT:
            return "goat";
        case Animals::CAT:
            return "cat";
        case Animals::DOG:
            return "dog";
        case Animals::OSTRICH:
            return "ostrich";
        default:
            return "getAnimalName(): Unhandled enumerator";
    }
}

void printNumberOfLegs(Animals animals)
{
    std::cout << "A " << getAnimalName(animals) << " has ";
    
    switch(animals)
    {
        case Animals::CHICKEN:
        case Animals::OSTRICH:
            std::cout << "2 "; 
            break;
            
        case Animals::DOG:
        case Animals::CAT:
        case Animals::PIG:
        case Animals::GOAT:
            std::cout << "4 ";
            break;
        
        default:
            std::cout << "printNumberOfLegs(): Unhandled enumerator";
            break;
            
    }

    std::cout << "legs.\n";    
}

int main()
{
    printNumberOfLegs(Animals::CAT);
    printNumberOfLegs(Animals::CHICKEN);

    return 0;
}
