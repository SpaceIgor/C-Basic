#include <iostream>


int main()
{
    setlocale(LC_ALL, "rus");
    
    std::cout << "Введите число: "; 
    int smaller;
    std::cin >> smaller;
    
    std::cout << "Введите большее число: ";
    int larger;
    std::cin>>larger;
    
    if(smaller > larger)
    {
        std::cout <<  "Меняем значения местами" << "\n";
        
        int temp = larger;
        larger = smaller;
        smaller = temp;
        
    }
    
    std::cout << "Меньшее число: " << smaller << "\n";
    std::cout << "Большее число: " << larger << "\n";
    

    return 0;
}
