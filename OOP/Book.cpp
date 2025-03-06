#include <iostream>
#include <cstring>

class Book {
private:
    char* title;
    char* author;
    int pages;

public:
    // Constructor
    Book(const char* t, const char* a, int p) : pages(p) {
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        
        author = new char[strlen(a) + 1];
        strcpy(author, a);
    }

    // Copy Constructor
    Book(const Book& other) : pages(other.pages) {
        title = new char[strlen(other.title) + 1];
        strcpy(title, other.title);
        
        author = new char[strlen(other.author) + 1];
        strcpy(author, other.author);
    }

    // Destructor
    ~Book() {
        delete[] title;
        delete[] author;
    }

    // Display Book Details
    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << std::endl;
    }
};

int main() {
    int numBooks;
    std::cout << "Enter the number of books: ";
    std::cin >> numBooks;

    Book** library = new Book*[numBooks]; // Dynamic array of pointers to Book objects

    for (int i = 0; i < numBooks; i++) {
        char title[100], author[100];
        int pages;
        
        std::cout << "Enter title: ";
        std::cin.ignore(); // Ignore leftover newline
        std::cin.getline(title, 100);
        
        std::cout << "Enter author: ";
        std::cin.getline(author, 100);
        
        std::cout << "Enter pages: ";
        std::cin >> pages;

        library[i] = new Book(title, author, pages);
    }

    std::cout << "\nLibrary Books:\n";
    for (int i = 0; i < numBooks; i++) {
        library[i]->display();
    }

    // Free allocated memory
    for (int i = 0; i < numBooks; i++) {
        delete library[i];
    }
    delete[] library;

    return 0;
}
