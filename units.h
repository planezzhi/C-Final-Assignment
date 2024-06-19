#ifndef UNITS_H_INCLUDED
#define UNITS_H_INCLUDED

#include <memory>
#include <string>
#include "field.h"


//enum GoblinType {Patrol, Tracking};


/* Class for units */
class Unit {
public:

    // Constructor
    Unit(bool sd, int r, int c);

    // Check which side the unit belongs to
    bool getSide() const;


    // Get and set row(col) of the unit
    int getRow() const;
    void setRow(int row);

    int getCol() const;
    void setCol(int col);

private:
    // Position in the field
    int row;
    int col;
    bool side;
    // add other properties for future tasks
};

std::string getUnitSymbol(const Unit& u);
#endif // UNITS_H_INCLUDED
