#include <iostream>

#include "Deque.h"

int Deque_with_sort::GetValue(int index) { // 26 + 42n
    Deque_with_sort tmp;
    int ret = 0; // 1
    for(int i = 0; i != index; ++i){ // 1 + 1 + ∑_1^n▒〖(2 + 21)〗
        int t = Del_front(); // 1 + 11
        tmp.Add_back(t); // 1 + 8
        N_op += 21;

    }
    ret = Del_front(); // 1 + 11
    Add_front(ret); // 1 + 8
    N_op += 23;
    while(!tmp.IsEmpty()){ // 1 + ∑_1^n▒〖(1 + 18)〗
        int temp = tmp.Del_back(); // 1 + 8
        Add_front(temp); // 1 + 8
        N_op += 18;

    }
    return ret; // 1
}

void Deque_with_sort::SetValue(int index, int value) { // 14 + 42n
    Deque_with_sort tmp;
    int ret = 0; // 1

    for(int i = 0; i != index; ++i){ // 1 + 1 + ∑_1^n▒〖(2 + 21)〗
        int t = Del_front(); // 1 + 11
        tmp.Add_back(t); // 1 + 8
        N_op += 21;

    }
    Del_front(); // 11
    Add_front(value); // 1 + 8
    N_op += 10;
    while(!tmp.IsEmpty()){ // 1 + ∑_1^n▒〖(1 + 18)〗
        int temp = tmp.Del_back(); // 1 + 8
        Add_front(temp); // 1 + 8
        N_op += 20;

    }
}

void Deque_with_sort::swap(int a, int b) { // 106 + 168n
    int v_a = GetValue(a); // 2 + 26 + 42n = 27 + 42n
    int v_b = GetValue(b); // 27 + 42n
    N_op += 8;

    SetValue(a, v_b); // 2 + 14 + 42n = 26 + 42n
    SetValue(b, v_a); // 26 + 42n
}

int Deque_with_sort::pivot(int low, int high) { // 144 + 350n + 210n^2
    int pi = GetValue(high); // 28 + 42n
    int i = low - 1; // 2
    N_op += 12;
    for (int j = low; j <= high - 1; j++) { // 3 + ∑_1^(n)▒〖(140 + 210n)〗 = 3 + 140n +210n^2
        N_op += 5;
        if (GetValue(j) <= pi) { // 28 + 42n
            i++; // 1
            N_op += 3;

            swap(i, j); // 108 + 168n
        }
    }
    swap(i + 1, high); // 109 + 168n
    return i + 1; // 2
}

void Deque_with_sort::QuickSort(int low, int high) { // ∑_1^(2n-1)▒〖(148 + 350n + 210n^2)〗 = 420n^3 + 490n^2 - 54n - 148
    N_op += 1;
    if (low < high) { // 1
        int piv = pivot(low, high); // 147 + 350n + 210n^2
        N_op+=9;
        QuickSort(low, piv - 1);
        QuickSort(piv + 1, high);
    }
}

unsigned long long Deque_with_sort::ReturnN_op() {
    return N_op;
}

void Deque_with_sort::ClearN_op() {
    N_op = 0;
}
