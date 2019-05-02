/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef HAM_C_H
#define HAM_C_H

#include <string>
#include "Food.hpp"

using namespace std;

class Ham : public Food
{
private:
    string type;
    float weight;

public:
    Ham(string, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */