#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    float num1, num2, res;
    std::cout << "Enter number:\n ";
    std::cin >> num1;

    std::cout << "Enter number2:\n ";
    std::cin >> num2;

    //+,-, *, /
    char sym;
    std::cout << "Enter symbol: ";
    std::cin >> sym;

    /*if(sym == '+')
        res = num1 + num2;
    else if(sym == '-')
            res = num1 - num2;
    else if(sym == '/')
            res = num1 / num2;
    else if(sym == '*')
            res = num1 * num2;*/

    switch (sym) {
    case '+': res = num1 + num2; break;
    case '-': res = num1 - num2; break;
    case '*': res = num1 * num2; break;
    case '/': res = num1 / num2; break;
    default: res = 0; std::cout << "ERROR"; break;
    }
    
    
    std::cout << "Result: " << res << std::endl;
    

    return 0;
}