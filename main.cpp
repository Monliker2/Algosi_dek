#include <iostream>
#include <chrono>
#include "Deque.h"

using namespace std;



/*void quick_sort(Deque_with_sort& array, int low, int high)
{
    int i = low; // 1
    int j = high; // 1
    int pivot = array.GetValue((i + j) / 2); // 2 + 1 + 26 + 42 * ((i + j) / 2)
    int temp;

    while (i <= j) // 1 + ∑_1^n▒〖(1 + )〗
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
}*/

int main()
{

    Deque_with_sort t;
    srand(time(0));
    for(int i=0; i < 10;i++) {
        //t.Add_back(i);
        t.Add_back(rand() % 10);
    }
    for(int i=0; i < 10;i++) {
        cout<<t.GetValue(i)<<' ';
    }
    cout<<'\n';

    t.QuickSort(0, 9);

    for(int i=0; i < 10;i++) {
        cout<<t.GetValue(i)<<' ';
    }
    cout << "\n";

    int key[5000];
    for (int i = 0; i != 5000; ++i) {
        key[i] = rand() % 5000;
    }
    //int n = 100;
    for(int n = 500; n<=5000; n+=500){

        Deque_with_sort deque;

        for (int i = 0; i != n; ++i) {
            deque.Add_back(key[i]);
        }
        cout << "\n";

        auto start = std::chrono::high_resolution_clock::now();
        deque.QuickSort(0, n-1);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> time = end - start;
        cout << "Sorting " << n << " elements take: " << time.count() * 1000 << " ms\n";

    }
    return 0;
}

