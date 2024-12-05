#ifndef TYPES_H
#define TYPES_H

class Simulator;
class Prompter;

class LineParser;
class CommandParser;
class OptionParser;
class Command;
class TimeCommand;
class DateCommand;
class EchoCommand;
class WcCommand;
class WordCountCommand;
class CharacterCountCommand;
class TouchCommand;
class TimeOptionParser;
class DateOptionParser;
class EchoOptionParser;
class WcOptionParser;
// class WordCount;
// class CharacterCount;
class TouchOptionParser;

class InputCharStream;
class OutputCharStream;
//da li su potrebni uopste?

class CommandWithInput;
class CommandWithOutput;

//jao negde treba stringsrteam zar ne
class FileReader;
class FileWriter;
class ConsoleReader;
class ConsoleWriter;
//nesto od ovoga nasledjuje ifstream / ofstream

//enumovi!

class PipeChain;
class RawPipeNode;

#endif