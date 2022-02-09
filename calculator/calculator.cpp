#include <iostream>

int getUserInput()
{
    std::cout << "Please enter an integer:";
    int value;
    std::cin >> value;
    return value;
}

int getMathematicalOperation()
{
    std::cout << "Please enter which operation you want (1 = +, 2 = -, 3 = *, 4 = /): ";
    int op;
    std::cin >> op;
    return op;
}

int calculateResult(int x, int op, int y)
{
    if (op==1)
        return x+y;
    if (op==2)
        return x-y;
    if (op==3)
        return x*y;
    if (op==4)
        return x/y;
        
    return -1;          // если пользователь ввел некорректный символ 
}

void printResult(int result)
{
    std::cout << "Your result is: " << result << std::endl;
}

int main()
{
     // Получаем первое значение от пользователя
    int input1 = getUserInput();
    
    // Получаем математическую операцию от пользователя
    int op = getMathematicalOperation();
    
    // Получаем второе значение от пользователя
    int input2 = getUserInput();
    
    // Вычисляем результат и сохраняем его во временной переменной
    int result = calculateResult(input1, op, input2);
    
    // Выводим результат
    printResult(result);
    
    return 0;
}