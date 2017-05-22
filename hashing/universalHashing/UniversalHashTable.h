#ifndef UNIVERSALHASHTABLE_H
#define UNIVERSALHASHTABLE_H
#include "vector"

class UniversalHashTable
{
    public:
        UniversalHashTable();
        UniversalHashTable(int _size);
        virtual bool search(int _index);
        virtual bool insert(int _index);
        virtual bool remove(int _index);
        virtual void reset() = 0;
    protected:
        bool* uTable;
        std::vector<int> setOfKeys;
};

#endif // UNIVERSALHASHTABLE_H
