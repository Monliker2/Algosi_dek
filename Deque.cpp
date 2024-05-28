#include "Deque.h"
#include <iostream>

using namespace std;


Deque::Deque() { // 2
    head = nullptr; // +1
    tail = nullptr; // +1
}

Deque::~Deque() { // 1 + ∑_1^n▒〖(4)〗
    deque* tmp;
    while (head != nullptr) { // 1 + ∑_1^n▒〖(4)〗
        tmp = head; // 1
        head = head->next; // 1
        delete tmp; // 1
    }
}

void Deque::Add_front(int value) { // 8
    deque* tmp = new deque; // 2
    tmp->value = value; // 1
    tmp->prev = nullptr; // 1
    if (head == nullptr) { // 1+3
        head = tail = tmp; // 2
        tmp->next = nullptr; // 1

    } else {
        tmp->next = head; // 1
        head->prev = tmp; // 1
        head = tmp; // 1
    }
}

void Deque::Add_back(int value) { // 8
    deque* tmp = new deque;
    tmp->value = value;
    tmp->next = nullptr;
    if (tail == nullptr) {
        head = tail = tmp;
        tmp->prev = nullptr;
    } else {
        tmp->prev = tail;
        tail->next = tmp;
        tail = tmp;
    }
}

bool Deque::IsEmpty() { // 4
    return (head == nullptr && tail == nullptr) ? true : false; // 4
}

int Deque::Del_front() { // 11
    if(IsEmpty()) {
        int special_value = 0;
        cout<<"Deque is empty"<<endl;
        return special_value;
    }
    deque* tmp = head; // 1
    int ret = tmp->value; // 1
    if(head == tail) { // 1 + 2
        tail = head = nullptr; // 2
    }
    else {
        head = head->next; // 1
        head->prev = nullptr; // 1
    }
    delete tmp; // 1 + 4
    return ret; // 1
}

int Deque::Del_back() { // 11
    if(IsEmpty()) {
        int special_value = 0;
        cout<<"Deque is empty"<<endl;
        return special_value;
    }
    deque* tmp = tail;
    int ret = tmp->value;
    if(head == tail) {
        tail = head = nullptr;
    }
    else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete tmp;
    return ret;
}

void Deque::ShowAll() {
    if(IsEmpty()) {
        cout<<"Deque is empty"<<endl;
    }
    deque* tmp = head;
    while(tmp) {
        cout<< tmp->value<<' ';
        tmp = tmp->next;
    }
    cout<<endl;
}

int Deque::ShowHead() {
    if (head != nullptr) {
        return head->value;
    }
    else return -1;
}

int Deque::ShowTail() {
    if (tail != nullptr) {
        return tail->value;
    }
    else return -1;
}










