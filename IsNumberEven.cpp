#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    unsigned long ulNumber;
    system("cls");
    std::cout << "Input an integer positive number\r\n";
    std::cin >> ulNumber;
    if (ulNumber % 2 == 0)
        std::cout << "The number is even\r\n";
    else
        std::cout << "The number is odd\r\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
