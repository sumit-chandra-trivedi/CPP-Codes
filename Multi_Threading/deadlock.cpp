#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void thread1() {
    std::lock_guard<std::mutex> lock1(mtx1); // Thread 1 locks mtx1
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    std::cout << "Thread 1: Locked mtx1, waiting for mtx2\n";
    std::lock_guard<std::mutex> lock2(mtx2); // Thread 1 waits for mtx2
    std::cout << "Thread 1: Acquired mtx2\n";
}

void thread2() {
    std::lock_guard<std::mutex> lock2(mtx2); // Thread 2 locks mtx2
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    std::cout << "Thread 2: Locked mtx2, waiting for mtx1\n";
    std::lock_guard<std::mutex> lock1(mtx1); // Thread 2 waits for mtx1
    std::cout << "Thread 2: Acquired mtx1\n";
}

// IMplementation to avoid above deadlock scenario
void thread1() {
    
    std::lock(mtx1,mtx2);
    std::lock_guard<std::mutex> lock1(mtx1,std::adopt_lock); // Thread 1 locks mtx1
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    std::cout << "Thread 1: Locked mtx1, waiting for mtx2\n";
    std::lock_guard<std::mutex> lock2(mtx2,std::adopt_lock); // Thread 1 waits for mtx2
    std::cout << "Thread 1: Acquired mtx2\n";
}

void thread2() {
    //std::lock_guard<std::mutex> lock2(mtx2); // Thread 2 locks mtx2
    std::lock(mtx1,mtx2);
    std::lock_guard<std::mutex> lock1(mtx1,std::adopt_lock);
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    std::cout << "Thread 2: Locked mtx2, waiting for mtx1\n";
    std::lock_guard<std::mutex> lock2(mtx2,std::adopt_lock); // Thread 2 waits for mtx1
    std::cout << "Thread 2: Acquired mtx1\n";
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}
