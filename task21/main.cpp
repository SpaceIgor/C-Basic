#include <iostream> 
#include <algorithm> // для std::swap. В C++11 используйте заголовок <utility>
 
int main()
{
    const int length(9);
    int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
 
    for (int iteration = 0; iteration < length-1; ++iteration)
    {
        // Перебираем каждый элемент массива до последнего элемента (не включительно).
        // Последний элемент не имеет пары для сравнения
        for (int currentIndex = 0; currentIndex < length - 1; ++currentIndex)
        {
            // Если текущий элемент больше элемента, следующего за ним, то меняем их местами
            if (array[currentIndex] > array[currentIndex+1])
                std::swap(array[currentIndex], array[currentIndex + 1]);
        }
    }
 
    // Выводим отсортированный массив на экран
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';
 
    return 0;
}