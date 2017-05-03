#ifndef QUEUEBASEDONLIST_H
#define QUEUEBASEDONLIST_H

struct Node
{
    int x;
    Node *prev, *next;
};

class QueueBasedOnList
{
private:
    Node *head;
    Node *tail;
public:
    QueueBasedOnList();
    int push(int i);
    void pop();
    void show();
    int size();
    ~QueueBasedOnList();
};

#endif // QUEUEBASEDONLIST_H
