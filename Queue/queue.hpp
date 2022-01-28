#include <iostream>
#include <list>
#include <iterator>

template <typename T>
class queue
{
private:
    std::list<T> _m_ls;
    int _m_size;
    
public:
    queue();
    queue(const queue<T>&);
    const T& back()const;
    void push(const T&);
    void pop();
    bool empty() const;
    int size() const;
    const T& front() const;
    void swap(queue<T>&);
    ~queue();
};
