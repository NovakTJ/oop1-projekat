#include "CommandLogic.h"

void PipeChain::execute()
{
    for(Command& c : getCommands()){
        c.execute();
    }
    
}

list<Command> PipeChain::getCommands()
{
    return commands;
}

string RawPipeNode::getCommandDescription()
{
    return commandDescription;
}

void PipeNode::setInputStream(istream *is)
{
    inputStream = is;
}

void PipeNode::setOutputStream(ostream *os)
{
    outputStream = os;
}

void Command::execute()
{
    executeLogic();
    delete this;
}
