#include "MatrixHashFunction.h"
#include <iostream>

MatrixHashFunction* MatrixHashFunction::instance;

MatrixHashFunction::MatrixHashFunction()
{
}

HashFunction* MatrixHashFunction::getInstance()
{
    if (instance == nullptr)
    {
        std::cout << "Done";
        instance = new MatrixHashFunction();
    }
}
void MatrixHashFunction::genrateRandomHashFunction()
{

}

int MatrixHashFunction::hash(long long int key)
{
    return 0;
}
