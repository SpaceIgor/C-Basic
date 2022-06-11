#include <iostream> 
#include <algorithm> // для std::swap. В C++11 используйте заголовок <utility>
 
int main()
{
    const int length(9);
    int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
 
    for (int iteration = 0; iteration < length-1; ++iteration)
    {
        // Помните о том, что последний элемент будет отсортирован и в каждой последующей итерации цикла,
        // поэтому наша сортировка «заканчивается» на один элемент раньше
        int endOfArrayIndex(length - iteration);
 
        bool swapped(false); // отслеживаем, были ли выполнены замены в этой итерации
 
        // Перебираем каждый элемент массива до последнего (не включительно).
        // Последний элемент не имеет пары для сравнения
        for (int currentIndex = 0; currentIndex < endOfArrayIndex - 1; ++currentIndex)
        {
            // Если текущий элемент больше элемента, следующего за ним,
            if (array[currentIndex] > array[currentIndex + 1])
            {
                // то выполняем замену
                std::swap(array[currentIndex], array[currentIndex + 1]);
                swapped = true;
            }
        }
 
        // Если в этой итерации не выполнилось ни одной замены, то цикл можно завершать
        if (!swapped)
        {
            // Выполнение начинается с 0-й итерации, но мы привыкли считать, начиная с 1, поэтому для подсчета количества итераций добавляем единицу
            std::cout << "Early termination on iteration: " << iteration+1 << '\n';
            break;
        }
    }
 
    // Выводим отсортированный массив на экран
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';
 
    return 0;
}