#include <iostream>
 
bool isPrime(int x)
{
    if (x == 2)
        return true;
    if (x == 3)
        return true;
    if (x == 5)
        return true;
    if (x == 7)
        return true;
    return false;
}
 
int main()
{
    std::cout << "Enter a single digit integer: ";
    int x;
    std::cin >> x;
 
    bool prime = isPrime(x);
 
    if (prime)
        std::cout << "The digit is prime" << std::endl;
    else
        std::cout << "The digit is not prime" << std::endl;
 
    return 0;
}