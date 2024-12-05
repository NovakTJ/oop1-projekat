#ifndef CLOGIC_H
#define CLOGIC_H

#include "types.h"
#include<istream>
#include<ostream>
#include<list>
using namespace std;

class Command{
    public:
    virtual void execute() = 0;
    virtual void addOption() = 0;
};

class RawPipeNode{
    public:
    istream* inputStream;
    ostream* outputStream;
    string commandDescription;
    RawPipeNode(string commandDescription, istream* inputStream, ostream* outputStream) : 
    inputStream(inputStream),
    outputStream(outputStream),
    commandDescription(commandDescription)
    {}
};

class PipeChain{
    public:
    void execute();
    list<Command> getCommands();
    private:
    list<Command> commands;

};

#endif