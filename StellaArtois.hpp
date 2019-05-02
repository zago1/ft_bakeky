/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef STELLAARTOIS_E_H
#define STELLAARTOIS_E_H

#include <string>
#include "Beer.hpp"

using namespace std;

class StellaArtois : public Beer
{
private:
public:
    StellaArtois(int, float, double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */