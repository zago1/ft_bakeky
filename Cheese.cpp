/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(string type, float weight, double price) : Food(price)
{
    this->type = type;
    this->weight = weight;
};

string Cheese::getDescricao()
{
    return ("Cheese " + type + " - " + to_string(weight) + " Kg.");
};

/* fim de arquivo */