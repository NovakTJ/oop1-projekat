#include "Parsers.h"
#include "CommandLogic.h"
RawPipeNode LineParser::parse(string s){
    stringstream ss = stringstream(s);
    string commandString;
    string inputString;
    getline(ss, commandString, delimiter);
    if(ss.eof()){
        return RawPipeNode(commandString);
    }
    getline(ss, inputString, delimiter);
    if(ss.eof()){
        return RawPipeNode(commandString, inputString);
    }
    if(!ss.eof()){
        getline(ss, commandString, delimiter);
        cout<<"greska "<<commandString;
        return RawPipeNode(commandString, inputString);

    }
}

Command* CommandParser::parse(RawPipeNode node)
{
    return new TimeCommand();
}
