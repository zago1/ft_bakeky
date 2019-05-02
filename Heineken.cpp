/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Beer.hpp"
#include "Heineken.hpp"

using namespace std;

Heineken::Heineken(int qtty, float volume, double price) : Beer("Heineken", volume, price){};

string Heineken::getDescricao()
{
    return (this->getBrand() + " " + to_string(this->getVolume()) + "ml");
};

/* fim de arquivo */