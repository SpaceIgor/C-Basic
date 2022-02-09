#include "io.h"

//Предварительное обьявление функций
int readNumber();            
void writeAnswer(int result);   

int main()
{
    // Принимает от пользователя первое целое число
    int input1 = readNumber();
    
    //Принимает от пользователя второе целое число
    int input2 = readNumber();
    
    //Выводим результат пользователю
    writeAnswer(input1 + input2);
    
    return 0;
}