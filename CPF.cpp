#include "CPF.hpp"
#include <string>

CPF::CPF(std::string number): number(number)
{
    //validação do cpf
}

std::string CPF::getNumber()
{
    return number;
}