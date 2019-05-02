/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Liquid.hpp"
#include "Water.hpp"

using namespace std;

Water::Water(string type, float volume, double price) : Liquid(volume, price)
{
    this->type = type;
};

string Water::getDescricao()
{
    return ("Water " + type + " - " + to_string(this->getVolume()) + " L.");
};

/* fim de arquivo */