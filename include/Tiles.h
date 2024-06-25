#ifndef TILES_H
#define TILES_H

#include <string>

#include "Tile.h"

class Tiles
{
public:
    Tiles();
    virtual ~Tiles();
    static const unsigned Rows = 6;
    static const unsigned Cols = 6;
    const Tile* getTile(unsigned row, unsigned col) const;
    Tile* getTile(unsigned row, unsigned col);
    void wiggleRow(unsigned row);     // with error, (invalid word or too short)
    void moveRowLeft(unsigned row);
    void moveRowRight(unsigned row);
    void wiggleRowVertical(unsigned row);
    void resetRowPosition(unsigned row);
    void updateRow(unsigned row, unsigned* colors);
    void clear();
    float getInitialRowYPosition(unsigned row) const;
private:
    Tile* array[Rows][Cols];
};

#endif // TILES_H
