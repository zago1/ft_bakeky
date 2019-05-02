/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

#include "MyProgram.hpp"
#include "Menu.hpp"
#include "MyBooleanClass.hpp"
#include "Information.hpp"
#include "Food.hpp"
#include "Bread.hpp"
#include "Cracker.hpp"
#include "FilledWafer.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Ham.hpp"
#include "Mortadella.hpp"
#include "Milk.hpp"
#include "Water.hpp"
#include "Soda.hpp"
#include "Heineken.hpp"
#include "StellaArtois.hpp"
#include "Budweiser.hpp"
#include "Amstel.hpp"

using namespace std;

MyProgram::MyProgram(string programName)
{
    this->programName = programName;
};

MyBooleanClass *MyProgram::getVerboseMode()
{
    return this->verboseMode;
};
void MyProgram::setVerboseMode(MyBooleanClass *verboseMode)
{
    this->verboseMode = verboseMode;
};
MyBooleanClass *MyProgram::getShortMessageMode()
{
    return this->shortMessageMode;
};
void MyProgram::setShortMessageMode(MyBooleanClass *shortMessageMode)
{
    this->shortMessageMode = shortMessageMode;
};

void MyProgram::start()
{
    myMainList.clear();
    Information::wellcome("C++ Program " + programName + " running!", shortMessageMode->getStatus());
    process();
    Information::bye(shortMessageMode->getStatus());
    clearAll();
}

void MyProgram::process()
{
    vector<string> opcoes({"Exit", "List Database", "Insert Items"});
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:
        {
            listItems();
        };
        break;
        case 2:
        {
            insertItems();
        };
        break;
        };
    };
};

void MyProgram::clearAll() // está errada ! corrigir !!!! # CORRIGIDO #
{

    vector<Food *>::iterator scan = myMainList.begin();

    while (scan != myMainList.end())
    {
        delete (*scan);
        *scan = NULL;
        scan++;
    };

    myMainList.clear();

    delete verboseMode;
    delete shortMessageMode;
    verboseMode = NULL;
    shortMessageMode = NULL;
};

void MyProgram::listItems()
{
    double total = 0.00;

    cout << "------------------------------\nItems in Database:\n------------------------------\n";
    vector<Food *>::iterator scan = myMainList.begin();

    while (scan != myMainList.end())
    {
        cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getPrice() << endl;
        total += (*scan)->getPrice();
        scan++;
    };
    cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};

void MyProgram::insertItems()
{
    cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items", {"Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella", "Milk", "Water", "Soda", "Beer"});
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:
        {
            insertBread();
        };
        break;
        case 2:
        {
            insertCheese();
        };
        break;
        case 3:
        {
            insertCottageCheese();
        };
        break;
        case 4:
        {
            insertCracker();
        };
        break;
        case 5:
        {
            insertFilledWafer();
        };
        break;
        case 6:
        {
            insertHam();
        };
        break;
        case 7:
        {
            insertMortadella();
        };
        break;
        case 8:
        {
            insertMilk();
        };
        break;
        case 9:
        {
            insertWater();
        };
        break;
        case 10:
        {
            insertSoda();
        };
        break;
        case 11:
        {
            insertBeers();
        };
        break;
        };
    };
};

void MyProgram::insertBread()
{
    Bread *bread;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    bread = new Bread(type, weight, cost);
    myMainList.insert(myMainList.end(), bread);

    cout << endl
         << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getPrice() << endl;
};

void MyProgram::insertCracker()
{
    Cracker *cracker;
    string buffer;
    string type;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cracker = new Cracker(type, amount, cost);
    myMainList.insert(myMainList.end(), cracker);

    cout << endl
         << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getPrice() << endl;
};

void MyProgram::insertFilledWafer()
{
    FilledWafer *filledWafer;
    string buffer;
    string type;
    string filling;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, type);
    cout << "Filling ...: ";
    getline(cin, filling);
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    filledWafer = new FilledWafer(type, filling, amount, cost);
    myMainList.insert(myMainList.end(), filledWafer);

    cout << endl
         << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getPrice() << endl;
};

void MyProgram::insertCheese()
{
    Cheese *cheese;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cheese = new Cheese(type, weight, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl
         << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getPrice() << endl;
};

void MyProgram::insertCottageCheese()
{
    CottageCheese *cheese;
    string buffer;
    int qtty;
    float weigth;
    double cost;

    cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
    cout << "Weight(g) ....: ";
    getline(cin, buffer);
    weigth = stof(buffer);
    cout << "Qtty ....: ";
    getline(cin, buffer);
    qtty = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cheese = new CottageCheese(weigth, qtty, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl
         << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getPrice() << endl;
};

void MyProgram::insertHam()
{
    Ham *ham;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    ham = new Ham(type, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl
         << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getPrice() << endl;
};

void MyProgram::insertMortadella()
{
    Mortadella *mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl
         << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getPrice() << endl;
}

void MyProgram::insertMilk()
{
    Milk *milk;
    string buffer;
    string type;
    float volume;
    double cost;

    cout << "------------------------------\nInsert Milk:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Volume ....: ";
    getline(cin, buffer);
    volume = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    milk = new Milk(type, volume, cost);
    myMainList.insert(myMainList.end(), milk);

    cout << endl
         << milk->getDescricao() << " - US$ " << fixed << setprecision(2) << milk->getPrice() << endl;
};
void MyProgram::insertWater()
{
    Water *water;
    string buffer;
    string type;
    float volume;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Volume ....: ";
    getline(cin, buffer);
    volume = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    water = new Water(type, volume, cost);
    myMainList.insert(myMainList.end(), water);

    cout << endl
         << water->getDescricao() << " - US$ " << fixed << setprecision(2) << water->getPrice() << endl;
};
void MyProgram::insertSoda()
{
    Soda *soda;
    string buffer;
    string flavor;
    float volume;
    double cost;

    cout << "------------------------------\nInsert Soda:\n------------------------------\n";
    cout << "Flavor ......: ";
    getline(cin, buffer);
    flavor = buffer;
    cout << "Volume ....: ";
    getline(cin, buffer);
    volume = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    soda = new Soda(flavor, volume, cost);
    myMainList.insert(myMainList.end(), soda);

    cout << endl
         << soda->getDescricao() << " - US$ " << fixed << setprecision(2) << soda->getPrice() << endl;
};
void MyProgram::insertBeers()
{
    Menu menu("Insert Beers", {"Exit", "Heineken", "Budweiser", "Stella Artois", "Amstel"});
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:
        {
            insertBeer(new Heineken(0, 0, 0));
        };
        break;
        case 2:
        {
            insertBeer(new Budweiser(0, 0, 0));
        };
        break;
        case 3:
        {
            insertBeer(new StellaArtois(0, 0, 0));
        };
        break;
        case 4:
        {
            insertBeer(new Amstel(0, 0, 0));
        };
        break;
        };
    };
};

void MyProgram::insertBeer(Beer *beer)
{
    string buffer;
    float volume;
    double cost;

    cout << "------------------------------\nInsert " << beer->getBrand() << ":\n------------------------------\n";
    cout << "Volume(ml) ....: ";
    getline(cin, buffer);
    volume = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beer->setVolume(volume);
    beer->setPrice(cost);
    myMainList.insert(myMainList.end(), beer);

    cout << endl
         << beer->getDescricao() << " - US$ " << fixed << setprecision(2) << beer->getPrice() << endl;
};

/* fim de arquivo */