#ifndef BamHashPLUGIN_H
#define BamHashPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BamHashPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BamHash";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
