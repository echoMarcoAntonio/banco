#include "Account.hpp"
#include <iostream>

int Account::accNumber = 0;

// construtor
Account::Account(std::string number, Holder holder)
    : number(number), holder(holder), balance(0)
{
    accNumber++;
}


// destrutor
Account::~Account()
{
    accNumber--;
}

void Account::withdraw(float amountWithdraw)
{
    if (amountWithdraw < 0)
    {
        std::cout << "Não é possível sacar um valor negativo" << std::endl;
        return;
    }
    if (amountWithdraw > balance)
    {
        std::cout << "Seu saldo é insuficiente para esta operação" << std::endl;
        return;
    }

    balance -= amountWithdraw;
}

void Account::deposit(float amountDeposit)
{
    if (amountDeposit < 0)
    {
        std::cout << "Não é possível depositar um valor negativo" << std::endl;
        return;
    }

    balance += amountDeposit;
}

std::string Account::getNumber()
{
    return number;
}

float Account::getBalance() const
{
    return balance;
}

void Account::setHolderNumber(std::string number)
{
    this->number = number;
}

int Account::getAccNumber()
{
    return accNumber;
}
