#ifndef TASK_H
#define TASK_H

#include <string>

class Task
{
public:
    int id;
    int priority;
    std::string data;
    Task(int _id, int _priority, std::string _data);


    bool operator<(const Task& other) const;
    bool operator>(const Task& other) const;
    
    void execute(){

    };
};
#endif