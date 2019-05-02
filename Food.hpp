/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef FOOD_B_H
#define FOOD_B_H

#include <string>

using namespace std;

class Food
{
protected:
   double price;

public:
   Food(double);
   virtual double getPrice();
   virtual void setPrice(double);

   virtual string getDescricao() = 0;
};

#endif

/* fim de arquivo */