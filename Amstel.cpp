/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Beer.hpp"
#include "Amstel.hpp"

using namespace std;

Amstel::Amstel(int qtty, float volume, double price) : Beer("Amstel", volume, price){};

string Amstel::getDescricao()
{
    return (this->getBrand() + " " + to_string(this->getVolume()) + "ml");
};

/* fim de arquivo */