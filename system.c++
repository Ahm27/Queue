#include <iostream>
#include "qqueue.h"

using namespace std;

int main()
{
    Queue waitingQueue;
    int choice;

    do
    {
        cout << "\n====== Student Affairs Waiting System ======\n";
        cout << "1. Add Student to Queue\n";
        cout << "2. Serve Next Student\n";
        cout << "3. View Waiting Queue\n";
        cout << "4. View Next Student\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1)
        {
            Student s;

            cout << "Enter Student ID: ";
            cin >> s.id;

            cout << "Enter Student Name: ";
            cin >> s.name;

            cout << "Service Needed:\n";
            cout << "1. Enrollment\n";
            cout << "2. ID Card\n";
            cout << "3. Transcript\n";
            cout << "Choose: ";

            int serviceChoice;
            cin >> serviceChoice;

            switch (serviceChoice)
            {
            case 1:
                s.service = "Enrollment";
                break;
            case 2:
                s.service = "ID Card";
                break;
            case 3:
                s.service = "Transcript";
                break;
            default:
                s.service = "General";
            }

            waitingQueue.enqueue(s);
        }

        else if (choice == 2)
        {
            waitingQueue.dequeue();
        }

        else if (choice == 3)
        {
            waitingQueue.display();
        }

        else if (choice == 4)
        {
            if (!waitingQueue.isEmpty())
            {
                Student s = waitingQueue.peek();
                cout << "Next Student: "
                     << s.name
                     << " (" << s.service << ")\n";
            }
            else
            {
                cout << "Queue is empty.\n";
            }
        }

    } while (choice != 5);

    cout << "System Closed.\n";

    return 0;
}