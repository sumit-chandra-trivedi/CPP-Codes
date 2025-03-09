#include <iostream>
#include <chrono>

void stackAllocation() {
    int arr[100000];  // Allocated on stack (may cause stack overflow)
    for (int i = 0; i < 100000; i++) {
        arr[i] = i;  // Fill array
    }
}

void heapAllocation() {
    int* arr = new int[100000];  // Allocated on heap
    for (int i = 0; i < 100000; i++) {
        arr[i] = i;  // Fill array
    }
    delete[] arr;  // Free memory
}

int main() {
    using namespace std::chrono;

    auto start = high_resolution_clock::now();
    stackAllocation();
    auto end = high_resolution_clock::now();
    std::cout << "Stack Allocation Time: " << duration_cast<microseconds>(end - start).count() << " \n";

    start = high_resolution_clock::now();
    heapAllocation();
    end = high_resolution_clock::now();
    std::cout << "Heap Allocation Time: " << duration_cast<microseconds>(end - start).count() << " \n";

    return 0;
}
