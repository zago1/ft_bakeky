/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Beer.hpp"
#include "Budweiser.hpp"

using namespace std;

Budweiser::Budweiser(int qtty, float volume, double price) : Beer("Budweiser", volume, price){};

string Budweiser::getDescricao()
{
    return (this->getBrand() + " " + to_string(this->getVolume()) + "ml");
};

/* fim de arquivo */