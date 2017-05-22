#include <iostream>
#include "HashFunction.h"
#include "MatrixHashFunction.h"
#include "Utility.h"
#include "PairingHashFucntion.h"
#include "QuadraticSpaceTable.h"'
#include "UniversalHasher.h"

using namespace std;

int main()
{
//    PairingHashFucntion hf = PairingHashFucntion(25, 20);
//    hf.genrateRandomHashFunction();
//    cout << hf.hash(3) << endl;
//    hf.genrateRandomHashFunction();
//    cout << hf.hash(3) << endl;

//    QuadraticSpaceTable qt = QuadraticSpaceTable("test.txt");
    string s;
    cout << "Enter the space solution you need for hashing:\n1)quadratic\t\t2)linear" << endl;
    cin >> s;
    UniversalHasher uh = UniversalHasher("keys10001000.txt", s);
    uh.insertAllkeys();
    cout << "Number of collisions is " << uh.getNumberOfCollisions();
    return 0;
}
