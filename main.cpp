#include <iostream>
#include "Deque.h"
using namespace std;



int main()
{
    //test();

    Deque_with_sort deq;
    srand(time(0));

    for(int i=0; i < 5;i++) {
        deq.Add_back(i);
    }

    deq.SetValue(0,100);

    for(int i=0; i < 5;i++) {
        cout<<deq.GetValue(i)<<' ';
    }

    return 0;
}

