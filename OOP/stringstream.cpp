#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string input = "sumit is a great person ";

    stringstream ss(input) ; // Creating a stringstream object with the string `input`

    string word;

    // Extracting words one by one from the stringstream
    while(ss >> word)
    {
        cout<<word<<endl;  // Output each word
    }
    

     // Example of writing to stringstream
    stringstream ss1;
    ss1 << "Hello, ";
    ss1 << "world!";
    
    // Retrieve the content of stringstream
    string result = ss1.str();
    std::cout << "Result: " << result << std::endl;  // Output: "Hello, world!"
    
    // Example of reading from stringstream
    stringstream ss2(result);
    string word1;
    
    while (ss2 >> word1) {
        std::cout << "Word: " << word1 << std::endl;  // Outputs each word
    }

    return 0;
}
