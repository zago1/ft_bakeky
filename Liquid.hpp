/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef LIQUID_C_H
#define LIQUID_C_H

#include <string>
#include "Food.hpp"

using namespace std;

class Liquid : public Food
{
private:
    float volume;

public:
    Liquid(float, double);
    float getVolume();
    void setVolume(float);
};

#endif

/* fim de arquivo */