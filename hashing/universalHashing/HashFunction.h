#ifndef HASHFUNCTION_H
#define HASHFUNCTION_H


class HashFunction
{
    public:
       HashFunction();
       virtual void genrateRandomHashFunction() = 0;
       virtual int hash(long long int key) = 0;

};

#endif // HASHFUNCTION_H
