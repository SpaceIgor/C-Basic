#include <iostream>

int main()
{
    int number = 0;
    
    do
    {
        std::cout << "Enter a number from 1 to 9. ";
        std::cin >> number;
        
        if (std::cin.fail())
            std::cin.clear(); 
 
        std::cin.ignore(32767, '\n');
    } while (number < 1 || number > 9);
    
    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    
    const int arrayLength = sizeof(array) / sizeof(array[0]);
    
    for (int index = 0; index < arrayLength; ++index)
        std::cout << array[index] << " ";
    
    std::cout << "\n";
    
    for (int index =0; index < arrayLength; ++index)
    {
        if(array[index] == number)
        {
            std::cout << "The number " << number << " has index " << index << "\n";
            break;
        }    
    }
        
    return 0;
}