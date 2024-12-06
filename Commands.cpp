#include "Commands.h"
#include<ctime>
using namespace std;
void TimeCommand::executeLogic()
{
    *outputStream << string(ctime(0));
    delete this;
}