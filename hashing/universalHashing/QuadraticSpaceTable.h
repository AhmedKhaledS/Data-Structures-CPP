#ifndef QUADRATICSPACETABLE_H
#define QUADRATICSPACETABLE_H
#include <string>
#include <UniversalHashTable.h>


class QuadraticSpaceTable : public UniversalHashTable
{
    public:
        /** Default constructor */
        QuadraticSpaceTable();
        QuadraticSpaceTable(int _size);
        bool search(int _index) override;
        bool insert(int _index) override;
        bool remove(int _index) override;
        void reset() override;
    private:
        int tableSize;
};

#endif // QUADRATICSPACETABLE_H
