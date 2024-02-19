#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <wchar.h>

struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    BankAccount myAccount;

    std::cout << "Введите номер счёта: ";
    std::cin >> myAccount.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> myAccount.ownerName;

    std::cout << "Введите баланс: ";
    std::cin >> myAccount.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(myAccount, newBalance);

    std::cout << "Ваш счёт: " << myAccount.ownerName << ", " << myAccount.accountNumber << ", " << myAccount.balance << std::endl;

    return 0;
}