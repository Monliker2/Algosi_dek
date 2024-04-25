#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Deque.h"
using namespace std;

void test() {
    Deque deq;

    for(int i=0; i<100;i++) {
        deq.Add_front(i);
    }

    for(int i=0; i<100;i++) {
        cout<<deq[i]<<' ';
    }
    cout<<endl;

    for(int i=0; i<100;i++) {
        cout<<deq.Del_front()<<' ';
    }
    cout<<endl;

    for(int i=0; i<100;i++) {
        deq.Add_back(i);
    }
    cout<<endl;

    for(int i=0; i<100;i++) {
        cout<<deq[i]<<' ';
    }
    cout<<endl;

    for(int i=0; i<100;i++) {
        cout<<deq.Del_back()<<' ';
    }
    cout<<endl;
}

int main()
{
    test();

    return 0;
}

