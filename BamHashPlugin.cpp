#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BamHashPlugin.h"

void BamHashPlugin::input(std::string file) {
 inputfile = file;
}

void BamHashPlugin::run() {}

void BamHashPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "bamhash_checksum_fasta";
myCommand += " ";
myCommand += inputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BamHashPlugin> BamHashPluginProxy = PluginProxy<BamHashPlugin>("BamHash", PluginManager::getInstance());
