#include <iostream>
#include <string>
#include "Account.hpp"
#include "Holder.hpp"
#include "CPF.hpp"

using namespace std;

int main() {
    Holder holder("Vinicius", (CPF("123.456.789-10")));

    Account account("123456", holder);

    account.deposit(300);
    cout << "Saldo da conta: " << account.getBalance() << endl;

    account.withdraw(50);
    cout << "Saldo da conta após saque: " << account.getBalance() << endl;

    return 0;
}
