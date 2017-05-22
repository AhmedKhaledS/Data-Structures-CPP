#include "PairingHashFucntion.h"

PairingHashFucntion* PairingHashFucntion::instance;

PairingHashFucntion::PairingHashFucntion()
{
}

HashFunction* PairingHashFucntion::getInstance()
{
    if (instance == nullptr)
    {
        instance = new PairingHashFucntion();
    }
}
void PairingHashFucntion::genrateRandomHashFunction()
{

}

int PairingHashFucntion::hash(long long int key)
{
    return 0;
}
