/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef WATER_C_H
#define WATER_C_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Water : public Liquid
{
private:
    string type;

public:
    Water(string, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */