/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef BEER_C_H
#define BEER_C_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Beer : public Liquid
{
private:
    string brand;

public:
    Beer(string, float, double);
    string getBrand();
    void setBrand(string);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */