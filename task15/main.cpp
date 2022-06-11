#include <iostream>

int main()
{
    char myChar = 'a';
    while (myChar <= 'z')
    {
        std::cout << myChar << " " << static_cast<int>(myChar) << "\n";
        ++myChar;
    }

    return 0;
}