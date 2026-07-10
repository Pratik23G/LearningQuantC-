#include <iostream>
#include <thread>
#include <vector>
#include <syncstream>

int main()
{
    auto lambdaFunc=[](int x)
    {
        std::osyncstream syncOut(std::cout);
        syncOut << "This is thread worker " << std::this_thread::get_id() << std::endl;
        syncOut << "Argument here is: " << x << std::endl;
    };

    std::vector<std::jthread> jThreads;
    for(int i{}; i < 10; i++){
        jThreads.push_back(std::jthread(lambdaFunc, i));
    }

    std::osyncstream(std::cout) << "This is the main thread it waits hooray!! " << std::endl;
    return 0;
}