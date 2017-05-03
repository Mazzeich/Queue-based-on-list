#include <cstdlib>
#include <iostream>
#include <queuebasedonlist.h>

int main()
{
    QueueBasedOnList que;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(1);
    que.show();
    que.size();
    que.pop();
    que.show();
    que.size();
    que.pop();
    que.pop();
    que.show();
    que.size();
}
