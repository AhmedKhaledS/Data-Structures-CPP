#include "FileReader.h"
#include <fstream>
#include <sstream>

using namespace std;

vector<int> FileReader::read(string path)
{
    vector<int> data;
    string line;

    ifstream file;
    file.open(path, ios::in);
    while(getline(file, line)) {
        istringstream iss(line);
        while (iss) {
            string s;
            if (!getline(iss, s, ',')) break;
            istringstream tmp(s);
            int x;
            tmp >> x;
            data.push_back(x);
        }
    }
    file.close();
    return data;
}
