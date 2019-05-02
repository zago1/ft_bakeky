/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef AMSTEL_E_H
#define AMSTEL_E_H

#include <string>
#include "Beer.hpp"

using namespace std;

class Amstel : public Beer
{
private:
public:
    Amstel(int, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */