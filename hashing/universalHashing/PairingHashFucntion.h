#ifndef PAIRINGHASHFUCNTION_H
#define PAIRINGHASHFUCNTION_H

#include "HashFunction.h"

class PairingHashFucntion : public HashFunction
{
    public:
        PairingHashFucntion(int _size, long long int _prime);
        PairingHashFucntion();
        void genrateRandomHashFunction() override;
        int hash(long long int key) override;
        void setTableSize(int _size);
        int getTableSize();
        void setPrimeNumber(int _prime);
        int getPrimeNumber();
    private:
        int tableSize;
        long long int primeNumber;
        int a, b;
};

#endif // PAIRINGHASHFUCNTION_H
