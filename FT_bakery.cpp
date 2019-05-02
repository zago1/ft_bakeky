#include "FT_bakery.hpp"
#include "MyProgram.hpp"
#include "MyBooleanClass.hpp"

/* DANGER: A LOT OF GLOBAL VARIABLES !!! (OBJECTS & STRUCTURES) */

int main(int argc, char *argv[])
{
    MyProgram *program = new MyProgram(string(argv[0]));
    verifyArguments(argc, argv, program);

    program->start();
};

void verifyArguments(int argc, char *argv[], MyProgram *program)
{
    MyBooleanClass *verboseMode = program->getVerboseMode();
    MyBooleanClass *shortMessageMode = program->getShortMessageMode();

    if (verboseMode)
    {
        delete verboseMode;
    };
    if (shortMessageMode)
    {
        delete shortMessageMode;
    };

    verboseMode = NULL;
    shortMessageMode = NULL;

    for (int count = 1; count < argc; count++)
    {
        if (string(argv[count]) == "-v")
        {
            verboseMode = new MyBooleanClass(true);
        };
        if (string(argv[count]) == "-s")
        {
            shortMessageMode = new MyBooleanClass(true);
        };
    };

    if (!verboseMode)
    {
        verboseMode = new MyBooleanClass();
    }; // default is false
    if (!shortMessageMode)
    {
        shortMessageMode = new MyBooleanClass();
    }; // default is false

    program->setVerboseMode(verboseMode);
    program->setShortMessageMode(shortMessageMode);
}