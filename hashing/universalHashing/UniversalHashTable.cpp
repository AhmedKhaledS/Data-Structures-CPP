#include "UniversalHashTable.h"

UniversalHashTable::UniversalHashTable()
{

}

UniversalHashTable::UniversalHashTable(int _size)
{
    uTable = new bool[_size];
}

bool UniversalHashTable::search(int _index)
{
    return uTable[_index];
}

bool UniversalHashTable::insert(int _index)
{
    uTable[_index] = true;
}

bool UniversalHashTable::remove(int _index)
{
    if (uTable[_index] == false)
    {
        return false;
    }
    uTable[_index] = false;
    return true;
}
