#include <iostream>
#include "HashFunction.h"
#include "MatrixHashFunction.h"

using namespace std;

int main()
{
    HashFunction* ptr;
    ptr = MatrixHashFunction::getInstance();
    return 0;
}
