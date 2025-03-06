#include <iostream>
#include <sstream>
#include <cstring>
#include <unordered_set>

using namespace std;

string rem_dup(string& input)
{
    stringstream ss(input);
    string word , result;
    unordered_set <string> unseen;

    while(ss >> word)
    {
        if(unseen.find(word) == unseen.end())
        {
            if(!result.empty())
            {
                result += " ";
            }
            result += word;
            unseen.insert(word);

        }
    }

    return result;
}

int main()
{
    string input ;
    getline(cin,input);
    string s = rem_dup(input);
    cout<<s;
}

/*
Notes on stringstream and >> Operator
1. std::stringstream Overview:
Part of the <sstream> header.
Allows treating strings as streams (like cin or cout).
Supports both input (reading) and output (writing) operations.
Internally manages a dynamic buffer of type std::basic_stringbuf that stores the string data.
2. Key Components of std::stringstream:
stringbuf: Manages the underlying string data.
Input/Output: Use >> for reading and << for writing.
str() Function:
str() retrieves the string from the internal buffer.
str("new string") sets or resets the buffer with a new string.
3. Constructors:
Default Constructor: Creates an empty stringstream.
Constructor with a String: Initializes the stream with a string:
cpp
Copy code
stringstream ss("example");
Modes: stringstream can be initialized in input-only, output-only, or both modes:
cpp
Copy code
stringstream ss("example", ios::in);  // Input mode
stringstream ss("example", ios::out); // Output mode
4. Extracting Words Using while (ss >> word):
>> Operator: Used for extracting data from the stream.
Behavior: Splits the string by whitespace and stores each word in the specified variable.
Looping Through Words:
cpp
Copy code
while (ss >> word) {
    // Do something with word
}
Condition: The loop continues until there are no more words to extract (i.e., the stream reaches the end or fails).
5. Working Example:
cpp
Copy code
std::stringstream ss("Hello, world!");
std::string word;

while (ss >> word) {
    std::cout << word << std::endl;
}
Output:
Copy code
Hello,
world!
6. How while (ss >> word) Works:
Extracts one word at a time from the stringstream.
Splits based on whitespace characters (spaces, tabs, newlines).
Each iteration of the loop assigns the extracted word to the variable word.
The loop condition becomes false when the stream runs out of words.
7. Common Functions:
str(): Get the full string from the stream.
str("new string"): Set or reset the stream's buffer with a new string.
clear(): Resets the stream's error state after a read/write operation fails.
8. Benefits of stringstream:
Dynamic Memory Management: Handles memory allocation and resizing automatically.
Convenient for Parsing: Simplifies tokenization and parsing of strings into different data types.
Safer than C-strings: Prevents buffer overflows and eliminates manual memory management, unlike C-style char arrays.
Summary:
stringstream is an efficient way to work with strings as streams.
The >> operator makes it easy to extract words, numbers, or other data types from the string, splitting by whitespace.
*/










