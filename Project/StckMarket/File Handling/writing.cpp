#include<iostream>
#include<fstream>

int main() {

std::ofstream outFile("sample.txt");

if(outFile.is_open())
{
    outFile<<"Hello I am writing in this file to learn file handling in C++.\n";
    outFile<<"Writing data to file is so simple.\n";
    outFile.close();

    std::cout<<"Data written to file successfully. "<<std::endl;

} else {
    std::cerr<<"Unable to open file for writing!"<<std::endl;
}

return 0;
}