/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"
#include "Liquid.hpp"

using namespace std;

Liquid::Liquid(float volume, double price) : Food(price)
{
    this->volume = volume;
};

float Liquid::getVolume()
{
    return volume;
};

void Liquid::setVolume(float volume)
{
    this->volume = volume;
}

/* fim de arquivo */