/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Liquid.hpp"
#include "Soda.hpp"

using namespace std;

Soda::Soda(string flavor, float volume, double price) : Liquid(volume, price)
{
    this->flavor = flavor;
};

string Soda::getDescricao()
{
    return ("Soda " + flavor + " - " + to_string(this->getVolume()) + " L.");
};

/* fim de arquivo */