#include "Deque.h"
#include <iostream>

int Deque_with_sort::operator[](int index) {
    int cur_index = 0;
    Deque* tmp = new Deque();

    int ret = 0;
    while(!this->IsEmpty()) {
        int t = this->Del_front();
        tmp->Add_back(t);
        if(index == cur_index) {
            ret = t;
            while(!tmp->IsEmpty()) {
                int t = tmp->Del_back();
                this->Add_front(t);
            }
            return ret;
            break;
        }
        cur_index++;
    }
    throw std::out_of_range("Index out of bounds");
}