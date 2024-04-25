#include <iostream>
#include "Deque.h"
#include <vector>
using namespace std;



int partition(Deque_with_sort& arr, int low, int high) {
    int pivot = arr[(low + high) / 2];
    int i = low - 1;

    for (int j = low; j <= high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    return i + 1;
}

void quicksort(Deque_with_sort& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}


int main()
{
    //test();

    Deque_with_sort deq;
    srand(time(0));

    for(int i=0; i < 5;i++) {
        deq.Add_back(i);
    }

    deq[0] = 100;
    deq.ShowAll();

    quicksort(deq, 0, 4);

    for(int i=0; i < 5;i++) {
        cout<<deq[i]<<' ';
    }

    cout<<endl<<(deq[1]>deq[2])<<endl;

    return 0;
}

