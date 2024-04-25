#include "Deque.h"
#include <iostream>

using namespace std;

Deque::Deque() {
    head = nullptr;
    tail = nullptr;
}
Deque::~Deque() {
    deque* tmp;
    while (head != nullptr) {
        tmp = head;
        head = head->next;
        delete tmp;
    }

}

void Deque::Add_front(int value) {
    deque* tmp = new deque;
    tmp->value = value;
    tmp->prev = nullptr;

    if (head == nullptr) {
        head = tail = tmp;
        tmp->next = nullptr;
    } else {
        tmp->next = head;
        head->prev = tmp;
        head = tmp;
    }
}

void Deque::Add_back(int value) {
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

bool Deque::IsEmpty() {
    return (head ==nullptr && tail==nullptr) ? true : false;
}

int Deque::Del_front() {
    if(IsEmpty()) {
        cout<<"Deque is empty"<<endl;
        return -1;
    }
    deque* tmp = head;
    int ret = tmp->value;
    if(head == tail) {
        tail = head = nullptr;
    }
    else {
        head = head->next;
        head->prev = nullptr;
    }
    delete tmp;
    return ret;
}

int Deque::Del_back() {
    if(IsEmpty()) {
        cout<<"Deque is empty"<<endl;
        return -1;
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

int &Deque::operator[](int index) {
    int cur_index = 0;
    deque* tmp = head;
    int value = 0;
    while(tmp) {
        if(cur_index==index) {
            return tmp->value;
        }
        tmp = tmp->next;
        cur_index++;
    }
    exit(13);
}








