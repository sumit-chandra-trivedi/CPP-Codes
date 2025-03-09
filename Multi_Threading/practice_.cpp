#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <chrono>
#include <condition_variable>

std::mutex mtx;
std::queue<int> dataqueue;
std::condition_variable> cv;
bool done = false;

void producer()
{
    for(int i = 0;i<5;i++)
    {
        std::lock<std::mutex> lock(mtx);
        dataqueue.push(i);
        std::cout<<"produced : "<<i<<std::endl;
    }
    cv.notify_one();
    std::this_thread::sleep_for(std::chrono::seconds(1));

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
        std::unique_lock<st::mutex> lock(mtx);
        cv.wait(lock,[]{return !dataqueue.empty() || done;});


        while(!dataqueue.empty())
        {
            int value = dataqueue.front();
            dataqueue.pop();
            cout<<"consumed : "<<value<<std::endl;
        }

        if(done)
        {
            break;
        }

    }
}

int main()
{
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();

    return 0;
}