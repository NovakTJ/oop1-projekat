#include "Simulator.h"

void Prompter::write()
{
    *this->outputStream << promptString;
}

void Prompter::setPromptString(const string& ps)
{
    this->promptString = ps;
}

void Simulator::simulate()
{
}
