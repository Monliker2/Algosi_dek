#include <iostream>
#include "Deque.h"
#include <vector>
using namespace std;

void quick_sort(Deque_with_sort& array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
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
    int size = 100;

    Deque_with_sort deq;
    srand(time(0));

    for(int i=0; i < size;i++) {
        deq.Add_back(rand()%100);
    }


    deq.ShowAll();

    quick_sort(deq, 0, size-1);

    for(int i=0; i < size;i++) {
        cout<<deq[i]<<' ';
    }

    return 0;
}

