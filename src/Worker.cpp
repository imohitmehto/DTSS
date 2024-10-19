#include "Worker.h"
#include <iostream>
#include <thread>
#include <chrono>

Worker::Worker(int _id): id(_id), isBusy(false){}

void Worker::executeTask(const Task& task){
    isBusy = true;
    std::cout << "Worker " << id << " is executing Task " << task.id << " with priority " << task.priority << std::endl;
    
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Worker " << id << " finished Task " << task.id << std::endl;
    isBusy = false;

}

bool Worker::isAlive() const {
    return true; 
}