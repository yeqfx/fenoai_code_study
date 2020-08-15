#pragma once

template <typename T>
class Stack
{
private:
    T* buf;
    int top;
    int size;
public:
    Stack(int s) : size(s), top(s)
    {
        buf = new T[s];
    }
    virtual ~Stack()
    {
        delete[] buf;
    }
    bool full() const;
    bool empty() const;
    void push(const T& a);
    void push(T&& a);
    T&& pop();
};

template<typename T>
bool Stack<T>::full() const
{
    return !top;
}

template<typename T>
bool Stack<T>::empty() const
{
    return top == size;
}

template<typename T>
void Stack<T>::push(const T& a)
{
    buf[--top] = a;
}

template<typename T>
inline void Stack<T>::push(T&& a)
{
    buf[--top] = std::move(a);
}

template<typename T>
T&& Stack<T>::pop()
{
    return std::move(buf[top++]);
}
