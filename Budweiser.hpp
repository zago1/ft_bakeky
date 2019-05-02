/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef BUDWEISER_E_H
#define BUDWEISER_E_H

#include <string>
#include "Beer.hpp"

using namespace std;

class Budweiser : public Beer
{
private:
public:
    Budweiser(int, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */