/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Beer.hpp"
#include "StellaArtois.hpp"

using namespace std;

StellaArtois::StellaArtois(int qtty, float volume, double price) : Beer("Stella Artois", volume, price){};

string StellaArtois::getDescricao()
{
    return (this->getBrand() + " " + to_string(this->getVolume()) + "ml");
};

/* fim de arquivo */