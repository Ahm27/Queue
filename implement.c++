#include "qqueue.h"

Queue::Queue()
{
    front = -1;
    rear = -1;
}

bool Queue::isEmpty()
{
    return (front == -1 || front > rear);
}

bool Queue::isFull()
{
    return (rear == MAX - 1);
}

void Queue::enqueue(Student s)
{
    if (isFull())
    {
        cout << "Queue is full!\n";
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    arr[rear] = s;

    cout << "Student added to waiting queue.\n";
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "No students in queue.\n";
        return;
    }

    cout << "Now serving: " << arr[front].name << endl;
    front++;
}

Student Queue::peek()
{
    return arr[front];
}

void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "\nStudents Waiting:\n";

    for (int i = front; i <= rear; i++)
    {
        cout << arr[i].id << " - "
             << arr[i].name << " ("
             << arr[i].service << ")" << endl;
    }
}