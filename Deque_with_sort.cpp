#include "Deque.h"
#include <iostream>

int Deque_with_sort::GetValue(int index) {
    int cur_index = 0;
    Deque_with_sort* tmp = new Deque_with_sort();

    int ret = 0;
    while(!this->IsEmpty()) {
        int t = this->Del_front();
        tmp->Add_back(t);
        if(index == cur_index) {
            ret = t;
            while(!tmp->IsEmpty()) {
                t = tmp->Del_back();
                this->Add_front(t);
            }
            delete tmp;
            return ret;
        }
        cur_index++;
    }
    delete tmp;
    throw std::out_of_range("Index out of bounds");
}

void Deque_with_sort::SetValue(int index, int value) {
    int cur_index = 0;
    Deque_with_sort* tmp = new Deque_with_sort();

    while(!this->IsEmpty()) {
        int t = this->Del_front();
        tmp->Add_back(t);
        if(index == cur_index) {
            t = tmp->Del_back();
            this->Add_front(value);

            while(!tmp->IsEmpty()) {
                t = tmp->Del_back();
                this->Add_front(t);
            }
            delete tmp;
            return;
        }
        cur_index++;
    }

    delete tmp;
    throw std::out_of_range("Index out of bounds");
}

int findpivot (int i, int j, Deque_with_sort a) {
    int k;
    int firstkey = a.GetValue(i);
    for(int k=i+1; i< j;i++) {
        if (a.GetValue(k)>firstkey){
            return k;
        }
        else if (a.GetValue(k) < firstkey){
            return i;
        }
        return 0;
    }
}

// int partition(int i, int j, int pivot, Deque_with_sort a) {
//     int l = i;
//     int r = j;
//     while(1>r) {
//         int t = a[l];
//         a[l] = a[r];
//
//     }
//     return 1;
// }

void Deque_with_sort::sort() {

}