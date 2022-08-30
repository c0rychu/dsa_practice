#include <stdlib.h>
#ifndef STACK_H
#define STACK_H

template <class T>
class Stack {
    public: 
        Stack(size_t MAX_N) : _now(0) { _arr = new T[MAX_N]; }
        Stack() : Stack(1024) {}
        ~Stack() { delete[] _arr; }

        T top() {
            return _arr[_now-1];
        }
        void pop() {
            if (_now != 0) {
                _now--;
            }
        }
        void push(T item) {
            _arr[_now++] = item;
        }
        size_t size() {
            return _now;
        }

    private:
        T* _arr;
        size_t _now;
};

#endif
