#include <iostream>

void sumTo(int value)
{
    int total(0);
    for (int count=1; count <= value; ++count)
        total += count;
 
    std::cout << total<< "\n";
}

int main()
{
    sumTo(5);
    return 0;
}