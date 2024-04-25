#include "Deque.h"
#include <iostream>



int& Deque_with_sort::operator[](int index) {
    int cur_index = 0;
         Deque_with_sort* tmp = new Deque_with_sort();

         while(!this->IsEmpty()) {
             int t = this->Del_front();
             tmp->Add_back(t);
             if(index == cur_index) {
                 int temp = 0;
                 int* p = nullptr;
                 bool f = true;

                 while(!tmp->IsEmpty()) {
                     t = tmp->Del_back();
                     if (f) {
                         p = this->Add_front(t);
                         f = !f;
                     }
                     else {
                         this->Add_front(t);
                     }
                 }
                 delete tmp;
                 return *p;
             }
             cur_index++;
         }
         delete tmp;
         throw std::out_of_range("Index out of bounds");
}

