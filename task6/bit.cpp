#include <iostream>
 
// x - это число, которое мы будем тестировать.
// pow - это множитель 2 (например, 128, 64, 32 и т.д.)
int printandDecrementBit(int x, int pow)
{
    // Проверяем, является ли x больше определенного числа, умноженного на 2 и выводим бит
    if (x >= pow)
        std::cout << "1";
    else
        std::cout << "0";
 
    // Если x больше, чем число, умноженное на 2, то вычитаем его из значения
    if (x >= pow)
        return x - pow;
    else
        return x;
}
 
int main()
{
    std::cout << "Enter an integer between 0 and 255: ";
    int x;
    std::cin >> x;
 
    x = printandDecrementBit(x, 128);
    x = printandDecrementBit(x, 64);
    x = printandDecrementBit(x, 32);
    x = printandDecrementBit(x, 16);
 
    std::cout << " ";
 
    x = printandDecrementBit(x, 8);
    x = printandDecrementBit(x, 4);
    x = printandDecrementBit(x, 2);
    x = printandDecrementBit(x, 1);
 
    return 0;
}