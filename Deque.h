#ifndef DEQUE_H
#define DEQUE_H

class Deque {
private:
    struct deque {
        int value;
        deque* next;
        deque* prev;
    };
    deque* head;
    deque* tail;
public:
    Deque();
    ~Deque();
    void Add_front(int value);
    void Add_back(int value);
    int Del_front();
    int Del_back();
    void ShowAll();
    int ShowHead();
    int ShowTail();
    bool IsEmpty();
    //int temp();
    //void Sort();
};

class Deque_with_sort : public Deque{
public:
    int operator[](int);
    void sort();
};



#endif //DEQUE_H
