#include "Utility.h"
#include <cmath>
#include <iostream>


inline bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

long long int Utility::generateNextPrime(long long int maximumKey, int spaceSize)
{
    int upperBound = std::max(maximumKey, (long long int)spaceSize);
    while(!isPrime(++upperBound));
    return upperBound;
}
