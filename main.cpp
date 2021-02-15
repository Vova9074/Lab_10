// Допишите программу, которая печатает абсолютное значение числа, введённого
// с клавиатуры пользователем.

#include <iostream>


int main() {
    int x;
        std::cout<<"x=";
        std::cin>>x;
    int absolute_value = abs(x);
        std::cout << absolute_value << std::endl;
}
