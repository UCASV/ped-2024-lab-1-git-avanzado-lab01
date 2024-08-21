#include <iostream>

int main()
{
    int opc = 0;
    float number1 = 0;
    float number2 = 0;
    float number3 = 0;

    std::cout << "que operacion desea realizar:\n"
              << "1-suma.\n"
              << "2-resta." << std::endl;
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "la suma es: \n";
        number3 = number1 + number2;
        std::cout << number3;
        break;

    case 2:
        std::cout << "la resta es: \n";
        number3 = number1 - number2;
        std::cout << number3;
        break;
    }
    return 0;
}
