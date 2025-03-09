#include <iostream>
#include <string>
#include <map>
#include <chrono>
#include <thread>
using namespace std;

void Refresh(map<string,int> ForecastMap)
{
    while(true)
    {
    for(auto& item : ForecastMap)
    {
        item.second++;
        cout<<item.first<<" "<<item.second<<endl;
    }

    this_thread::sleep_for(2000ms);}
}


int main()
{
    map<string,int> ForecastMap = {

        {"New York" , 15},
        {"Mumbai", 20},
        {"Bangalore", 25}
    };

    thread bck_grnd(Refresh,ForecastMap);


}