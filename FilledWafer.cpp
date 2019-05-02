/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Cracker.hpp"
#include "FilledWafer.hpp"

using namespace std;

FilledWafer::FilledWafer(string type, string recheio, int unidades, double price) : Cracker(type, unidades, price)
{
   this->recheio = recheio;
};

string FilledWafer::getDescricao()
{
   return ("Filled Wafer " + recheio + " - " + Cracker::getDescricao());
};

/* fim de arquivo */