#include "queue.hpp"

template <typename T>
queue<T>::queue():_m_size(0) {}

template <typename T>
queue<T>::~queue() {}

template <typename T>
queue<T>::queue(const queue<T>& que) {
    this->_m_ls = que._m_ls;
    this->_m_size = que._m_size;
}

template <typename T>
const T& queue<T>::back()const {
    try {
        if(!empty()) {
            return _m_ls.back();
        }else {
            throw std::exception();
        }
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << "\t'Queue is empty:'\n";
    }
}

template <typename T>
void queue<T>::push(const T& value) {
    _m_ls.push_back(value);
    _m_size++;
}

template <typename T>
void queue<T>::pop() {
    try {
        if(!empty()) {
            _m_ls.pop_front();
            _m_size--;
        }else {
            throw std::exception();
        }
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << "\t'Queue is empty:'\n";
    }
}

template <typename T>
bool queue<T>::empty()const {
    return !_m_size;
}

template <typename T>
int queue<T>::size()const {
    return _m_size;
}

template <typename T>
const T& queue<T>::front()const {
    try {
        if(!empty()) {
            return _m_ls.front();
        }else {
            throw std::exception();
        }
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << "\t'Queue is empty:'\n";
    }
}

template <typename T>
void queue<T>::swap(queue<T>& que) {
    queue<T> tmp(que);
    que._m_size = this->_m_size;
    que._m_ls = this->_m_ls;
    this->_m_size = tmp._m_size;
    this->_m_ls = tmp._m_ls;
}
