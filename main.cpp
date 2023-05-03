#include<iostream>
#include<cmath>

int main(){

    double a, b, c;
    char op;

    std::cout << "Input A: ";
    std::cin >> a;

    std::cout << "Input B: ";
    std::cin >> b;

    std::cout << "Input operator[+, -, x, /]: ";
    std::cin >> op;

    switch (op)
    {
        case '+':
            c = a + b; std::cout << "Your result is: " << c;
            break;
        case '-':
            c = a - b; std::cout << "Your result is: " << c; 
            break;
        case 'x':
            c = a * b; std::cout << "Your result is: " << c;
            break;
        case '/':
            c = a / b; std::cout << "Your result is: " << c;

        default:
            break;
    }

    return 0;
}