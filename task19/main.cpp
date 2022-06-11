#include "windows.h" 

namespace AnimalNames
{
    enum AnimalNames
    {   
        CHICKEN,
        LION,
        GIRAFFE,
        ELEPHANT,
        DUCK, 
        SHAKE,
        MAX_ANIMALS
    };
}    

int legs[AnimalNames::MAX_ANIMALS] = {2, 4, 4, 4, 2, 0 };

int main()
{
    std::cout << "ELEPHANT has " << legs[AnimalNames::ELEPHANT] << " legs." << "\n";

    return 0;
}