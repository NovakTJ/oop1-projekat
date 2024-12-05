#ifndef PARSERS_H
#define PARSERS_H

#include "types.h"
#include<sstream>
#include<iostream>
#include<istream>
#include "CommandLogic.h"
using namespace std;
class LineParser{
    RawPipeNode parse(string s);

};

#endif