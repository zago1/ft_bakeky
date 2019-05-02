/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MILK_C_H
#define MILK_C_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Milk : public Liquid
{
private:
    string type;

public:
    Milk(string, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */