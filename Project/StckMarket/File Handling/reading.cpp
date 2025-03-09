#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream inFile("sample.txt"); //Open the file for reading
    std::string line;

    if (inFile.is_open())
    {
        while(std::getline(inFile, line)) {
            std::cout<<line<<std::endl;
        }
        inFile.close()   ; //close the file
    } else {
        std::cerr<<"Unable to open file for reading!"<<std::endl;
    }

    return 0;
}