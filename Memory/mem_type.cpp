#include <iostream>
#include <cstdlib>

// Global variable (Stored in Data Segment)
int globalVar = 10;

// Static variable (Stored in Data Segment)
static int staticVar = 20;

// Uninitialized global variable (Stored in BSS Segment)
int uninitializedVar;

// Function stored in Code Segment
void functionExample() {
    int localVar = 30;  // Local variable (Stored in Stack)
    std::cout << "Local Variable (Stack): " << localVar << std::endl;
}

int main() {
    // Local variable (Stored in Stack)
    int localMain = 40;

    // Dynamic memory allocation (Stored in Heap)
    int* heapVar = new int(50);

    // Display memory addresses
    std::cout << "Global Variable (Data Segment): " << &globalVar << std::endl;
    std::cout << "Static Variable (Data Segment): " << &staticVar << std::endl;
    std::cout << "Uninitialized Variable (BSS Segment): " << &uninitializedVar << std::endl;
    std::cout << "Local Variable in main() (Stack): " << &localMain << std::endl;
    std::cout << "Dynamically Allocated Variable (Heap): " << heapVar << std::endl;

    functionExample();

    // Free allocated memory
    delete heapVar;

    return 0;
}

/*
In a computer’s physical memory (RAM), different types of memory are used to manage data efficiently. Here are the key types:

1. Stack Memory
Stores local variables, function parameters, return addresses.
Works on LIFO (Last In, First Out) principle.
Automatically allocated and deallocated when functions are called/returned.
Fast access, but limited size.
2. Heap Memory
Stores dynamically allocated objects (new in C++, malloc in C).
Manually managed (requires delete/free).
Larger but slower than the stack.
Risk of memory leaks if not properly managed.
3. Code (Text) Segment
Stores compiled program instructions (machine code).
Read-only to prevent accidental modification.
Includes function definitions.
4. Data Segment (Global & Static Variables)
Stores global, static, and constant variables.
Further divided into:
Initialized Data Segment → Stores initialized global/static variables.
BSS (Block Started by Symbol) Segment → Stores uninitialized global/static variables.
5. Memory-Mapped Region
Used for shared memory, dynamic libraries (DLLs), and file-mapped I/O.
Allows multiple processes to access the same memory region.
Each of these memory regions plays a crucial role in program execution and memory management. */