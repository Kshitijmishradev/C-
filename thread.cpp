#include <iostream>
#include <thread>
#include <syncstream>

void printMessage(int id){
    std::osyncstream(std::cout) << "Thread: " << id << '\n';
}

int main() {
    std::thread t1(printMessage, 1);
    std::thread t2(printMessage, 2);
    std::thread t3(printMessage, 3);

    t1.join();
    t2.join();
    t3.join();


    std::cout << "All workers completed\n";

    return 0;
}
