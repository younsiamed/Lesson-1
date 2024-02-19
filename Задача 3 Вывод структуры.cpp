#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <wchar.h>

struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    std::string index;
};

void printAddress(const Address& addr) {
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Номер дома: " << addr.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
    std::cout << "Индекс: " << addr.index << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    Address addr1 = { "Москва", "Арбат", 12, 8, "123456" };
    Address addr2 = { "Ижевск", "Пушкина", 59, 143, "953769" };

    printAddress(addr1);
    std::cout << std::endl;
    printAddress(addr2);

    return 0;
}