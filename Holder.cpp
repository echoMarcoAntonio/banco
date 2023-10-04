#include "Holder.hpp"
#include <iostream>
#include "CPF.hpp"

Holder::Holder(std::string name, CPF cpf) : name(name), cpf(cpf)
{
    nameStringSize();
}

std::string Holder::getHolderCPF()
{
    return cpf.getNumber();
}

std::string Holder::getHolderName()
{
    return name;
}

void Holder::setHolderName(std::string name)
{
    this->name = name;
}

void Holder::setHolderCPF(CPF cpf)
{
    this->cpf = cpf;
}

void Holder::nameStringSize()
{
    if (name.size() < 5)
    {
        std::cout << "O nome deve conter no mínimo cinco caracteres" << std::endl;
        exit(1);
    }
}