#ifndef COMMANDS_H
#define COMMANDS_H
#include "CommandLogic.h"
class TimeCommand : public Command{
    private:
    void addOption(string option) {};
    void executeLogic();
};

#endif