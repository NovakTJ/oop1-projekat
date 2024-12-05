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
