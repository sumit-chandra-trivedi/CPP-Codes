#include <iostream>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <thread>
#include <chrono>

std::queue<int> dataQueue;
std::mutex mtx;
std::condition_variable cv;
bool done = false;


void producer()
{
    for(int i = 1; i <= 5; i++)
    {
        {
            std::lock_guard<std::mutex> lock(mtx);
            dataQueue.push(i);
            std::cout << "Produced: " << i << std::endl;
        }
        cv.notify_one();
        std::this_thread::sleep_for(std::chrono::seconds(5)); // Simulate work
    }
    {
        std::lock_guard<std::mutex> lock(mtx);
        done = true;
    }
    cv.notify_all();
}

void consumer()
{
    while(true)
    {
        std::unique_lock <std::mutex> lock(mtx);
        cv.wait(lock,[]{return !dataQueue.empty() || done;});

        while(!dataQueue.empty())
        {
            int value = dataQueue.front();
            dataQueue.pop();
            std::cout<<"Consumed: "<<value<<std::endl;
        }

        if(done) break;
    }
}

int main()
{
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();
}