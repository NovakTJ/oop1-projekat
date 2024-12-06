#ifndef PARSERS_H
#define PARSERS_H

#include "types.h"
#include<sstream>
#include<iostream>
#include<istream>
#include "CommandLogic.h"
using namespace std;
class LineParser{
    public:
    RawPipeNode parse(string s);
private:
    char delimiter = '/"';

};

class CommandParser{
    public:
    Command* parse(RawPipeNode node);
};

#endif