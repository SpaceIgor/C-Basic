#include <iostream>


int main()
{
    // Используем кириллицу
    setlocale(LC_ALL, "rus");
    
    std::cout << "Введите число: ";
    int smaller;
    std::cin >> smaller;
    
    std::cout << "ВВедите большее число: ";
    int larger;
    std::cin >> larger;
    
    if (smaller > larger)
    {
        // То меняем местами эти значения 
        std::cout << "Меняем значения местами\n";
        
        int temp = larger;
        larger = smaller;
        smaller = temp;
    }   // temp уничтожается здесь
    
    std::cout << "Меньшее число: " << smaller << "\n";
    std::cout << "Большее число: " << larger << "\n";
    
    return 0;
}   // smaller и larger уничтожаются здесь
