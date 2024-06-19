#include <sstream>
#include <iomanip>
#include <cassert>
#include <Queue.h>
#include "engine.h"
#include "units.h"
#include "vector.h"
#include "Stack.h"
#include "algorithms.h"

using namespace std;

// Load map and units
Field* loadMap(istream& is, Vector<Unit*> units)
{
    //Fill in your code here
    int m, n, nt, nm, ng, r, c;
    Terrain t = PLAIN;
    string pg;
    is >> m >> n >> nt >> nm >> ng;
    Field* f = new Field(m, n);
    for (int i = 0; i <nt; i++) {
        is >> r >> c >> pg;
        if (pg == "W") t = WATER;
        if (pg == "M") t = MOUNTAIN;
        f->setTerrain(r, c, t);
    }
    for (int i = 0; i <nm; i++) {
        is >> r >> c;
        Unit* uptr = new Unit(true, r, c);
        f->setUnit(r, c, uptr);
        units.add(uptr);
    }
    for (int i = 0; i < ng; i++) {
        is >> r >> c >> pg;
        Unit* uptr = new Unit(false, r, c);
        f->setUnit(r, c, uptr);
        units.add(uptr);
    }
    return f;
}


// Main loop for playing the game
void play(Field& field, istream& is, ostream& os, Vector<Unit*>& units)
{

    int numTurns = 1;
    while (is)
    {
        // Print the new map

        os << field << endl;

        // Check winning
        // Fill in your code here

        // unit moves
        // Fill in your code here
        string line;
        getline(is,line);
        // Preventing loop in empty program
		// Please delete this 2 lines of code
        numTurns++;
    }
}


