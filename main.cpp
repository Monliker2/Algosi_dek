#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Deque.h"
using namespace std;

int main()
{
    Deque deq;

    deq.Add_front(1);
    deq.Add_front(2);
    deq.Add_back(3);
    deq.Add_back(4);



    deq.ShowAll();
    cout<<deq[2]<<endl;

    cout << "Head of deq: " << deq.ShowHead() << endl;
    cout << "Tail of deq: " << deq.ShowTail() << endl;

    cout << "Deleted front element: " << deq.Del_front() << endl;
    cout << "Deleted back element: " << deq.Del_back() << endl;
    cout << "Deleted back element: " << deq.Del_back() << endl;
    cout << "Deleted back element: " << deq.Del_front() << endl;


    cout << "deq elements after deletion: ";
    deq.ShowAll();
    cout << "Head of deq: " << deq.ShowHead() << endl;
    cout << "Tail of deq: " << deq.ShowTail() << endl;
    return 0;
}