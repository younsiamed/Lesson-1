#include <iostream>
#include <windows.h>
#include <locale.h>
#include <wchar.h>

enum class Month {
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    int userInput;
    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> userInput;

        if (userInput == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }

        Month month = static_cast<Month>(userInput);

        switch (month) {
        case Month::Январь:
            std::cout << "Январь" << std::endl;
            break;
        case Month::Февраль:
            std::cout << "Февраль" << std::endl;
            break;
        case Month::Март:
            std::cout << "Март" << std::endl;
            break;
        case Month::Апрель:
            std::cout << "Апрель" << std::endl;
            break;
        case Month::Май:
            std::cout << "Май" << std::endl;
            break;
        case Month::Июнь:
            std::cout << "Июнь" << std::endl;
            break;
        case Month::Июль:
            std::cout << "Июль" << std::endl;
            break;
        case Month::Август:
            std::cout << "Август" << std::endl;
            break;
        case Month::Сентябрь:
            std::cout << "Сентябрь" << std::endl;
            break;
        case Month::Октябрь:
            std::cout << "Октябрь" << std::endl;
            break;
        case Month::Ноябрь:
            std::cout << "Ноябрь" << std::endl;
            break;
        case Month::Декабрь:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    }

    return 0;
}