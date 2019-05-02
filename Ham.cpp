/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"
#include "Ham.hpp"

using namespace std;

Ham::Ham(string type, float weight, double price) : Food(price)
{
    this->type = type;
    this->weight = weight;
};

string Ham::getDescricao()
{
    return ("Ham " + type + " " + to_string(weight) + " Kg.");
};

/* fim de arquivo */