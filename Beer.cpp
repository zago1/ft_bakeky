/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Liquid.hpp"
#include "Beer.hpp"

using namespace std;

Beer::Beer(string brand, float volume, double price) : Liquid(volume, price)
{
    this->brand = brand;
};

string Beer::getBrand()
{
    return brand;
};

void Beer::setBrand(string brand)
{
    this->brand = brand;
}

string Beer::getDescricao()
{
    return ("Beer " + brand + " " + to_string(this->getVolume()) + "ml.");
};

/* fim de arquivo */