/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef SODA_C_H
#define SODA_C_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Soda : public Liquid
{
private:
    string flavor;

public:
    Soda(string, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */