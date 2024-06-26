#include <iostream>
#include <fstream>
#include "field.h"
#include "units.h"
#include "engine.h"
#include <string>
#include <cassert>
using namespace std;

int main(int argc, char* argv[])
{
    Vector<Unit*> units;
    //读取文件作为输入流
/*    string filename = "map3.txt";
    ifstream infile;
    infile.open(filename.c_str());
*/    char ch;
    Field* f = loadMap(cin, units);

    if (f == NULL) {
        cout << "Failed to load map!" << endl;
        return 0;
    }



    //play(*f, ifs, ofs);
    play(*f, cin, cout, units);
    delete f;
    for (int i = 0; i < units.size(); i++) {delete units[i];}

    return 0;
}
