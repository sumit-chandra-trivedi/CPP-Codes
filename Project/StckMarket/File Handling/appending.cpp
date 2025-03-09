#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outFile("sample.txt", std::ios::app); //open file in append mode

    if(outFile.is_open())
    {
        outFile<<"Adding more content to the file using file handling.\n";
        outFile.close();
        std::cout<<"File appended successfuly";

    } else {
        std::cerr<<"Unable to open file"<<std::endl;
    }
}