#include<iostream>

int main (){

    int opc = 0;
    float number1 = 0;
    float number2 = 0;
    float number3 = 0;

    std::cout<<"que operacion desea realizar:\n"<<"1-suma.\n"<<"2-resta.\n"<<std::endl;
    std::cin>>opc;
    std::cout<<"ingrese el primer numero: "<<std::endl;
    std::cin>>number1;
    std::cout<<"ingrese el segundo numero: "<<std::endl;
    std::cin>>number2;

    
    switch (opc)
    {
        case 1:
            number3 = number1 + number2;
            std::cout<<"la suma es: "<<number3;
            break;

        case 2:
            number3 = number1 - number2;
            std::cout<<"la resta es: "<<number3;
            break;

    }

return 0;

}
