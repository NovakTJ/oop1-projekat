#ifndef CLOGIC_H
#define CLOGIC_H

#include "types.h"
#include<istream>
#include<ostream>
#include<list>
#include "Simulator.h"
using namespace std;

class PipeNode{
    public:
    void setInputStream(istream* is);
    void setOutputStream(ostream* os);
    protected:
    PipeNode(istream* inputStream = Simulator::getInputStream(), ostream* outputStream = Simulator::getOutputStream()): 
    inputStream(inputStream),
    outputStream(outputStream)
    {};

    istream* inputStream;
    ostream* outputStream;

};

class RawPipeNode : public PipeNode{
public:

    //RawPipeNode(string commandDescription) : RawPipeNode(commandDescription, Simulator::Instance()->getInputStream(), Simulator::Instance()->getOutputStream()) {}
    RawPipeNode(string commandDescription) : commandDescription(commandDescription) {}
    RawPipeNode(string commandDescription, string inputString) : commandDescription(commandDescription), PipeNode(new stringstream(inputString)) {}
    string getCommandDescription();
private:
    string commandDescription;

};

class Command : public PipeNode{
    public:
    void execute();
    virtual void addOption(string option) = 0;
    protected:
    virtual void executeLogic() = 0;

};


class PipeChain{
    public:
    void execute();
    list<Command> getCommands();
    private:
    list<Command> commands;

};

#endif