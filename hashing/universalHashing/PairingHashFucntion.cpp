#include "PairingHashFucntion.h"
#include <random>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

const int THRESHOLD = 1;
int (*hash_ptr)(int);

PairingHashFucntion::PairingHashFucntion(int _size, long long int _prime)
    : tableSize(_size), primeNumber(_prime)
{
//    hash_ptr = &getHashedIndex;
    srand((unsigned)time(0));
}

PairingHashFucntion::PairingHashFucntion()
{

}

void PairingHashFucntion::genrateRandomHashFunction()
{
    a = (rand() % (primeNumber - 1)) + THRESHOLD;
    b = (rand() % primeNumber);
}

int PairingHashFucntion::PairingHashFucntion::hash(long long int key)
{
    //cout << "prime number: " << primeNumber << "  " << "table size: " << tableSize << endl;
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
