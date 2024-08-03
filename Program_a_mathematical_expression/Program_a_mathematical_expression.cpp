#include <iostream>
#include <string>
#include <regex>
//Запрограммировать следующее выражение : (а + b — f / а) + f * a * a —(a + b) Числа а, b, f вводятся с клавиатуры.
//Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.


int inputInt(std::string textReq = "Enter an integer number") { // textReq текстовый запрос у пользователя
    std::string number;
    std::regex reg("^[0-9]"); //регулярное выражение
    while (true)
    {
        std::cout << textReq << std::endl;
        std::cin >> number;
        if (std::regex_search(number, reg)) {
            return stoi(number); //преобразование string в int. С++ 11
        }
    }
}

int main()
{   
    setlocale(LC_ALL, "ru");
    int a = 0, b = 0, f = 0;
    std::cout << "Для решения уровнения (а + b — f / а) + f * a * a — (a + b) введите целые число a,b и f \n";
    a = inputInt("Введите a:");
    b = inputInt("Введите b:");
    f = inputInt("Введите f:");
    std::cout << "Решение уравнения (а + b — f / а) + f * a * a — (a + b) = ";
    std::cout << ( a + b - f / a) + f * a * a - ( a + b ) << "\n\n\n\n\n";
    return 0;
}
