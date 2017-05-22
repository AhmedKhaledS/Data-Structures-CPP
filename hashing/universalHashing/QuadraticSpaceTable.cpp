#include "QuadraticSpaceTable.h"
#include "FileReader.h"
#include <iostream>

using namespace std;


QuadraticSpaceTable::QuadraticSpaceTable()
{
    //ctor
}

QuadraticSpaceTable::QuadraticSpaceTable(int _size)
{

//    for (auto x : setOfKeys)
//        cout << x << " ";'
    tableSize = _size;
    uTable = new bool[tableSize];
    for (int i = 0; i < tableSize; i++)
        uTable[i] = 0;
}

bool QuadraticSpaceTable::search(int _index)
{
    cout << "index: " << _index << endl;
    return uTable[_index];
}

bool QuadraticSpaceTable::insert(int _index)
{
    bool existence = uTable[_index];
    if (existence)
        return false;
    uTable[_index] = true;
    return true;
}

bool QuadraticSpaceTable::remove(int _index)
{
    if (uTable[_index] == false)
    {
        return false;
    }
    uTable[_index] = false;
    return true;
}

void QuadraticSpaceTable::reset()
{
    delete uTable;
    uTable = new bool[tableSize];
    for (int i = 0; i < tableSize; i++)
        uTable[i] = 0;
}



