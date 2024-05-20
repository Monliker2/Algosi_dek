#include "Deque.h"
#include <iostream>

int Deque_with_sort::GetValue(int index) { // 26 + 42n
    Deque_with_sort tmp;
    int ret = 0; // 1
    for(int i = 0; i != index; ++i){ // 1 + 1 + ∑_1^n▒〖(2 + 21)〗
        int t = Del_front(); // 1 + 11
        tmp.Add_back(t); // 1 + 8
    }
    ret = Del_front(); // 1 + 11
    Add_front(ret); // 1 + 8
    while(!tmp.IsEmpty()){ // 1 + ∑_1^n▒〖(1 + 18)〗
        int temp = tmp.Del_back(); // 1 + 8
        Add_front(temp); // 1 + 8
    }
    return ret; // 1
}

void Deque_with_sort::SetValue(int index, int value) { // 14 + 42n
    Deque_with_sort tmp;
    int ret = 0; // 1

    for(int i = 0; i != index; ++i){ // 1 + 1 + ∑_1^n▒〖(2 + 21)〗
        int t = Del_front(); // 1 + 11
        tmp.Add_back(t); // 1 + 8
    }
    Del_front();
    Add_front(value); // 1 + 8

    while(!tmp.IsEmpty()){ // 1 + ∑_1^n▒〖(1 + 18)〗
        int temp = tmp.Del_back(); // 1 + 8
        Add_front(temp); // 1 + 8
    }
}

void Deque_with_sort::swap(int a, int b) {
    int v_a = GetValue(a);
    int v_b = GetValue(b);

    SetValue(a, v_b);
    SetValue(b, v_a);
}

int Deque_with_sort::partition(int low, int high) {
    int pivot = GetValue(high);
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (GetValue(j) <= pivot) {
            i++;
            swap(i, j);
        }
    }
    swap(i + 1, high);
    return i + 1;
}

void Deque_with_sort::QuickSort(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);
        QuickSort(low, pi - 1);
        QuickSort(pi + 1, high);
    }
}