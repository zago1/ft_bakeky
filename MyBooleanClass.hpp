/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

using namespace std;

#ifndef MYBOOLEANCLASS_A_H
#define MYBOOLEANCLASS_A_H

class MyBooleanClass
{
private:
   bool booleanValue;

public:
   MyBooleanClass();
   MyBooleanClass(bool);
   ~MyBooleanClass();

   const bool getStatus(void);
};

#endif

/* fim de arquivo */