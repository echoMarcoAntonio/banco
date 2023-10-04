#pragma once
#include <string>
#include "CPF.hpp"

class Holder
{
private:
    CPF cpf;
    std::string name;

public:
    Holder(std::string name, CPF cpf);

    // getters
    std::string getHolderCPF();
    std::string getHolderName();

    // setters
    void setHolderName(std::string name);
    void setHolderCPF(CPF cpf);

private:
    void nameStringSize();
};
