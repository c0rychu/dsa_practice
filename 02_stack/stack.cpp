#include "stack.h"

template <class T>
T Stack<T>::top() {
    return _arr[_now-1];
}

template <class T> 
void Stack<T>::pop() {
    if (_now != 0) {
        _now--;
    }
}

template <class T>
void Stack<T>::push(T item) {
    _arr[_now++] = item;
}

template <class T>
size_t Stack<T>::size() {
    return _now;
}



