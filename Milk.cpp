/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Liquid.hpp"
#include "Milk.hpp"

using namespace std;

Milk::Milk(string type, float volume, double price) : Liquid(volume, price)
{
    this->type = type;
};

string Milk::getDescricao()
{
    return ("Milk " + type + " - " + to_string(this->getVolume()) + " L.");
};

/* fim de arquivo */