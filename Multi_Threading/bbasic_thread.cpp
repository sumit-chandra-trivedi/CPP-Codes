#include <iostream>
#include <thread>


static bool is_Finished = false;

void DoWork()
{
    using namespace std:: literals::chrono_literals; 

    std::cout<<"Started thread : "<<std::this_thread::get_id()<<std::endl;;
    while(!is_Finished)
    {
        std::cout<<"Working ..."<<std::endl;
        std::this_thread::sleep_for(5s);
    }
}

int main()
{
    std::thread worker(DoWork);

    std::cin.get();
    is_Finished = true;

    worker.join();

    std::cout<<"Finished ..."<<std::endl;

    std::cout<<"Started Thread : "<<std::this_thread::get_id()<<std::endl;

    std::cin.get();
}