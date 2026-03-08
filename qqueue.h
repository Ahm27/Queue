#define QUEUE_H

#include <iostream>
#include <string>

using namespace std;

struct Student
{
    int id;
    string name;
    string service;
};

class Queue
{
private:
    static const int MAX = 100;
    Student arr[MAX];
    int front;
    int rear;

public:
    Queue();

    bool isEmpty();
    bool isFull();

    void enqueue(Student s);
    void dequeue();
    void display();
    Student peek();
};

