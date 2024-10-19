#ifndef WORKER_H
#define WORKER_H

#include "Task.h"
#include <string>

class Worker
{

public:
    int id;
    bool isBusy;

    Worker(int _id);

    void executeTask(const Task& task);

    bool isAlive() const;
};

#endif