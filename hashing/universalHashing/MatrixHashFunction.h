#ifndef MATRIXHASHFUNCTION_H
#define MATRIXHASHFUNCTION_H

#include <HashFunction.h>


class MatrixHashFunction : public HashFunction
{
    public:
        static HashFunction* getInstance();
        void genrateRandomHashFunction() override;
        int hash(long long int key) override;
    private:
        MatrixHashFunction();
        static MatrixHashFunction* instance;
};

#endif // MATRIXHASHFUNCTION_H
