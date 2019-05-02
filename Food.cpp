/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"

using namespace std;

Food::Food(double price)
{
   this->price = price;
};

double Food::getPrice()
{
   return (price);
};

void Food::setPrice(double price)
{
   this->price = price;
}

/* fim de arquivo */