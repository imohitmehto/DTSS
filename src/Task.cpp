#include "Task.h"

Task::Task(int _id, int _priority, std::string _data)
    : id(_id), priority(_priority), data(_data){}

    bool Task::operator<(const Task& other) const{
        return this->priority <other.priority;
    }

     bool Task::operator>(const Task& other) const{
        return this->priority >other.priority;
    }