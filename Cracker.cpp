/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"
#include "Cracker.hpp"

using namespace std;

Cracker::Cracker(string type, int unidades, double price) : Food(price)
{
   this->type = type;
   this->unidades = unidades;
};

string Cracker::getDescricao()
{
   return ("Cracker " + type + " - " + to_string(unidades) + " un/pacote.");
};

/* fim de arquivo */