#ifndef BASE_H
#define BASE_H

#include<string>
#include<ostream>
#include<iostream>
using namespace std;
class Prompter{
public:
    //string getPromptString();
    void write();
    void setPromptString(const string& pc);
    Prompter(const string& promptString, ostream* outputStream) : promptString(promptString), outputStream(outputStream) {}
private:
    string promptString;
    ostream* outputStream;
};

class Simulator{
public:
    Simulator() :
    prompter(Prompter(string(" $ "), outputStream)),
    outputStream(&cout),
    inputStream(&cin)
    {}

    void simulate();
private:
    istream* inputStream;
    ostream* outputStream;
    Prompter prompter;
};
#endif