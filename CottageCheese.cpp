/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Cheese.hpp"
#include "CottageCheese.hpp"

using namespace std;

CottageCheese::CottageCheese(int qtty, float weight, double price) : Cheese("Cottage", weight, price)
{
    this->qtty = qtty;
};

string CottageCheese::getDescricao()
{
    return ("Cottage Cheese " + to_string(weight) + "g  " + to_string(qtty) + "x");
};

/* fim de arquivo */