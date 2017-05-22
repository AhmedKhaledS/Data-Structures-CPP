#ifndef PAIRINGHASHFUCNTION_H
#define PAIRINGHASHFUCNTION_H

#include "HashFunction.h"

class PairingHashFucntion : public HashFunction
{
    public:
        static HashFunction* getInstance();
        void genrateRandomHashFunction() override;
        int hash(long long int key) override;
    private:
        PairingHashFucntion();
        static PairingHashFucntion* instance;
};

#endif // PAIRINGHASHFUCNTION_H
