#include "Simulator.h"

void Prompter::write()
{
    *this->outputStream << promptString;
}

void Prompter::setPromptString(const string& ps)
{
    this->promptString = ps;
}

Simulator *Simulator::Instance()
{
    static Simulator instance;
    return &instance;
}

ostream *Simulator::getOutputStream()
{
    return Simulator::Instance()->outputStream;
}

istream *Simulator::getInputStream()
{
    return Simulator::Instance()->inputStream;
}

void Simulator::simulate()
{
}
