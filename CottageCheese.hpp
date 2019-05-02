/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef COTTAGECHEESE_E_H
#define COTTAGECHEESE_E_H

#include <string>
#include "Cheese.hpp"

using namespace std;

class CottageCheese : public Cheese
{
private:
    int qtty;

public:
    CottageCheese(int, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */