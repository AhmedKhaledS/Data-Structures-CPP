#ifndef UNIVERSALHASHER_H
#define UNIVERSALHASHER_H
#include "UniversalData.h"
#include "PairingHashFucntion.h"
#include "UniversalHashTable.h"
#include "QuadraticSpaceTable.h"
#include <vector>
#include <map>
#include <string>

class UniversalHasher
{
    public:
        UniversalHasher();
        UniversalHasher(std::string path, std::string hasher);
        bool searchKey(long long int key);
        bool insertKey(long long int key);
        bool deleteKey(long long int);
        void insertAllkeys();
        void prepareHashFunction();
        void resetHashTable();
        int getNumberOfCollisions();

    private:
        PairingHashFucntion pairHashFunction;
        UniversalHashTable* uTable;
        std::vector<int> setOfKeys;
        std::map<int, bool> duplicatesDetector;
        int collisions;
};

#endif // UNIVERSALHASHER_H
