#include <iostream>
#include <thread>
#include <syncstream>

void task(int id)
{
    std::osyncstream(std::cout)
        << "Task " << id << '\n';
}

int main()
{
    std::thread t1(task, 1);
    std::thread t2(task, 2);
    std::thread t3(task, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}