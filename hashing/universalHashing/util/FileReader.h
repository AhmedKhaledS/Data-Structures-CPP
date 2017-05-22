#ifndef FILEREADER_H
#define FILEREADER_H
#include <vector>
#include <string>

class FileReader
{
    public:
        static std::vector<int> read(std::string path);
    private:
        FileReader();
};

#endif // FILEREADER_H
