#include "UniversalHasher.h"
#include "Utility.h"
#include "FileReader.h"
#include <iostream>
#include <algorithm>

using namespace std;

UniversalHasher::UniversalHasher()
{

}

UniversalHasher::UniversalHasher(string path, string hasher)
{
    //data = _data;
    collisions = 0;
    setOfKeys = FileReader::read(path);
    int sz = setOfKeys.size();
    int maxkey = *max_element(setOfKeys.begin(),setOfKeys.end());
    if (hasher == "quadratic")
    {
        uTable = new QuadraticSpaceTable(sz*sz);
        pairHashFunction = PairingHashFucntion(sz*sz,
                        Utility::generateNextPrime(maxkey, sz*sz));
    }
    else
    {
        // for linear.
    }
    pairHashFunction.genrateRandomHashFunction();
    //pairHashFunction = new PairingHashFunction(data.tableSize, Utility::generateNextPrime(data.largestKey));
}

void UniversalHasher::prepareHashFunction()
{
    pairHashFunction.genrateRandomHashFunction();
}

bool UniversalHasher::searchKey(long long int key)
{
    return uTable->search(pairHashFunction.hash(key));
}

bool UniversalHasher::insertKey(long long int key)
{
    /// already exists.
    if (searchKey(key))
        return false;
    uTable->insert(pairHashFunction.hash(key));
    return true;
}
bool UniversalHasher::deleteKey(long long int key)
{
    return uTable->remove(pairHashFunction.hash(key));
}

void UniversalHasher::resetHashTable()
{
    uTable->reset();
}

void UniversalHasher::insertAllkeys()
{
    bool done = false;
    while (!done)
    {
        done = true;
        for (int i = 0; i < setOfKeys.size(); i++)
        {
            int currentKey = setOfKeys[i];
            bool existence = duplicatesDetector[currentKey];
            /// check for duplicates .. if exists discard them and continue.
            if (existence)
                continue;
            duplicatesDetector[currentKey] = true;
            cout << "key: " << currentKey << "   ";
            if (!insertKey(currentKey))
            {
                done = false;
                break;
            }
        }
        if (!done)
        {
            resetHashTable();
            prepareHashFunction();
            collisions++;
        }
    }
}

int UniversalHasher::getNumberOfCollisions()
{
    return collisions;
}



