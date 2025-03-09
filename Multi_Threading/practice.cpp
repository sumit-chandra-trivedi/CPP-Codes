#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <queue>
#include <condition_variable>
#include <semaphore>

std::counting_semaphore<1> sem(0);

std::queue<int> dataQueue;
std::mutex mtx;
std::condition_variable cv;
bool done = false;
void producer()
{
    for(int i = 1;i <=5;i++)
    {
        dataQueue.push(i);
        std::cout << "Produced: "<< i << std::endl;
    }

    std::this_thread::sleep_for(std::chrono::seconds(5));
    sem.release();
}


void consumer()
{

    sem.acquire();
    while(!dataQueue.empty())
    {
        int value = dataQueue.front();
        dataQueue.pop();
        std::cout<<"Consumed: "<<value<<std::endl;
    }

}


    

// void producer()
// {
//     for(int i = 1;i <=5;i++)
//     {
//         std::lock_guard<std::mutex> lock(mtx);
//         dataQueue.push(i);
//         std::cout << "Produced: "<< i << std::endl;
//     }

//     cv.notify_one();
//     std::this_thread::sleep_for(std::chrono::seconds(5));


//     {
//         std::lock_guard<std::mutex> lock(mtx);
//         done = true;
//     }

//     cv.notify_one();
// }


// void consumer()
// {

//     while(true)
//     {
//         std::unique_lock<std::mutex> lock(mtx);
//         cv.wait(lock, [] { return !dataQueue.empty() || done;});

//         while(!dataQueue.empty())
//         {
//             int value = dataQueue.front();
//             dataQueue.pop();
//             std::cout<<"Consumed: "<<value<<std::endl;
//         }

//         if(done) break;

//     }


    
// }

int main()
{
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();

    return 0;
}