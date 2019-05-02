/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef CHEESE_C_H
#define CHEESE_C_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cheese : public Food
{
private:
    string type;

protected:
    float weight;

public:
    Cheese(string, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */