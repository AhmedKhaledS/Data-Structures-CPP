#include "PairingHashFucntion.h"
#include <random>

const int THRESHOLD = 1;
int (*hash_ptr)(int);

PairingHashFucntion::PairingHashFucntion(int _size, long long int _prime)
    : tableSize(_size), primeNumber(_prime)
{
//    hash_ptr = &getHashedIndex;
}

PairingHashFucntion::PairingHashFucntion()
{

}

void PairingHashFucntion::genrateRandomHashFunction()
{
    a = (rand() % primeNumber);
    if (a == 0)
    {
        a = THRESHOLD;
    }
    b = (rand() % primeNumber);
}

int PairingHashFucntion::PairingHashFucntion::hash(long long int key)
{
    return ((a*key + b)%primeNumber)%tableSize;
}

void PairingHashFucntion::setTableSize(int _size)
{
    tableSize = _size;
}

int PairingHashFucntion::getTableSize()
{
    return tableSize;
}
void PairingHashFucntion::setPrimeNumber(int _prime)
{
    primeNumber = _prime;
}

int PairingHashFucntion::getPrimeNumber()
{
    return primeNumber;
}
