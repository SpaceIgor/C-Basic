#include <iostream>

struct Drob
{
   int numerator;
   int denominator;
};

void multiply(Drob d1, Drob d2)
{   
    using namespace std;
    
    cout << static_cast<float>(d1.numerator* d2.numerator) / 
        (d1.denominator* d2.denominator);
    
}
 
int main()

{
    using namespace std;
    
    Drob d1;
    cout << "Input the first numerator: ";
    cin >> d1.numerator;
    cout << "Input the first denominator: ";
    cin >> d1.denominator;
    
    Drob d2;
    cout << "Input the second numerator: ";
    cin >> d2.numerator;
    cout << "Input the second denominator: ";
    cin >> d2.denominator;
    
    multiply(d1, d2);
    
    return 0;
}
