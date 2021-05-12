#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <math.h>

using namespace std;

extern "C" int rfile(){
    cout << "Reading File!" << endl;
    
    ifstream file;
    string ins;
    
    file.open("/afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/opentitan_soc/tests/hex/test.hex", std::ifstream::in);
    int totalLines = count(istreambuf_iterator<char>(file), istreambuf_iterator<char>(), '\n');
    
    file.clear();
    file.seekg(0, file.beg);
    if (!file){
        cerr << "Unable to open file";
    }

    return totalLines;
}