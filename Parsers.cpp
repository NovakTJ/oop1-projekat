#include "Parsers.h"

RawPipeNode LineParser::parse(string s){
    char delimiter = '/"';
    stringstream ss = stringstream(s);
    string commandString;
    string inputString;
    getline(ss, commandString, delimiter);
    if(ss.eof()){
        return RawPipeNode(commandString, &cin, &cout);
    }
    getline(ss, inputString, delimiter);
    if(ss.eof()){
        return RawPipeNode(commandString, new stringstream(inputString), &cout);
    }
    if(!ss.eof()){
        getline(ss, commandString, delimiter);
        cout<<"greska "<<commandString;
        return RawPipeNode(commandString, new stringstream(inputString), &cout);

    }
}