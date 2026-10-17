#include <iostream>
#include <thread>

void sayHello()
{
    std::cout << "Hello from worker thread!\n";
}

int main()
{
    std::thread worker(sayHello);

    worker.join();

    std::cout << "Hello from main thread!\n";

    return 0;
}