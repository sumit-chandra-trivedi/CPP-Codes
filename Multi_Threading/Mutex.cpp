#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int count = 0;
mutex m;
void Increase_Count()
{
    //m.lock();
    std::lock_guard <std::mutex> lock(m);
    for(int i = 0;i<1000000;i++)
    ::count++;
    //m.unlock();
}

int main()
{
        std::thread t1(Increase_Count);
        std::thread t2(Increase_Count);
   
        t1.join();
        t2.join();
        std::cout<<::count;
}