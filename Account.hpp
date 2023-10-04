#pragma once
#include <string>
#include "Holder.hpp"

class Account
{
private:
    static int accNumber;

public:
    static int getAccNumber();

private:
    std::string number;
    Holder holder;
    float balance;

public:
    Account(std::string number, Holder holder);
    ~Account();
    void withdraw(float amountWithdraw);
    void deposit(float amountDeposit);

    // getter
    std::string getNumber();
    float getBalance() const;

    // setter
    void setHolderNumber(std::string number);
};
