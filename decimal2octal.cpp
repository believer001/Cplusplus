#include <iostream>
#include <cmath>
using namespace std;
int decimal2Octal(int decimalNumber);
int main()
{
   int decimalNumber;
   cout << "Enter a decimal number: ";
   cin >> decimalNumber;
   cout << decimalNumber << " in decimal = " << decimal2Octal(decimalNumber) << " in octal";
   
   return 0;
}
int decimal2Octal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}
