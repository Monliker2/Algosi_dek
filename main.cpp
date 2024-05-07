#include <iostream>
#include "Deque.h"
using namespace std;

void quick_sort(Deque_with_sort& array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array.GetValue((i + j) / 2);
    int temp;

    while (i <= j)
    {
        while (array.GetValue(i) < pivot)
            i++;
        while (array.GetValue(j) > pivot)
            j--;
        if (i <= j)
        {
            temp = array.GetValue(i);
            array.SetValue(i, array.GetValue(j));
            array.SetValue(j, temp);
            i++;
            j--;
        }
    }
    if (j > low)
        quick_sort(array, low, j);
    if (i < high)
        quick_sort(array, i, high);
}

int main()
{
    //test();

    Deque_with_sort deq;
    srand(time(0));

    for(int i=0; i < 5;i++) {
        deq.Add_back(i);
    }

    deq.SetValue(0,100);
    quick_sort(deq, 0, 4);

    for(int i=0; i < 5;i++) {
        cout<<deq.GetValue(i)<<' ';
    }



    return 0;
}

