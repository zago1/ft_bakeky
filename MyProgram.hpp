/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

using namespace std;

#ifndef MYPROGRAM_A_H
#define MYPROGRAM_A_H

#include <vector>

#include "Food.hpp"
#include "MyBooleanClass.hpp"
#include "Beer.hpp"

class MyProgram
{
private:
    string programName;

    MyBooleanClass *verboseMode = NULL;
    MyBooleanClass *shortMessageMode = NULL;

    vector<Food *> myMainList;

    void process(void);
    void clearAll(void);

    void listItems(void);
    void insertItems(void);
    void insertBread(void);
    void insertCracker(void);
    void insertFilledWafer(void);
    void insertCheese(void);
    void insertCottageCheese(void);
    void insertHam(void);
    void insertMortadella(void);
    void insertMilk(void);
    void insertWater(void);
    void insertSoda(void);
    void insertBeers(void);
    void insertBeer(Beer *beer);

public:
    MyProgram(string programName);
    ~MyProgram();
    void start();
    MyBooleanClass *getVerboseMode();
    void setVerboseMode(MyBooleanClass *verboseMode);
    MyBooleanClass *getShortMessageMode();
    void setShortMessageMode(MyBooleanClass *shortMessageMode);
};

#endif

/* fim de arquivo */