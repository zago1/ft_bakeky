/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef HEINEKEN_E_H
#define HEINEKEN_E_H

#include <string>
#include "Beer.hpp"

using namespace std;

class Heineken : public Beer
{
private:
public:
    Heineken(int, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */