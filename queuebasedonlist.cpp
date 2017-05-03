#include "queuebasedonlist.h"
#include <iostream>
#include <cstdlib>

using namespace std;


QueueBasedOnList::QueueBasedOnList()
{
    head = nullptr;
    tail = nullptr;
}

QueueBasedOnList::push(int i)
{
    Node *temp = new Node;
    temp->next = nullptr;
    temp->x = i;

    if (head == nullptr)
    {
        temp->prev = nullptr;
        head = temp;
        tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void QueueBasedOnList::pop()
{
    Node *temp = tail;
    tail = temp->prev;
    tail->next = nullptr;
}

void QueueBasedOnList::show()
{
    Node *temp = head;
    while(temp)
    {
       cout << temp->x <<" ";
       temp = temp->next;
    }
    cout <<'\n';
}

int QueueBasedOnList::size()
{
    int size;
    size = 0;
    Node *temp = head;
    while(temp)
    {
        size++;
        temp = temp->next;
    }
    cout << "Size of the queue equals to " << size << "." << endl;
}

QueueBasedOnList::~QueueBasedOnList()
{
    while(head)
    {
        tail = head->next;
        delete head;
        head = tail;
    }
}
