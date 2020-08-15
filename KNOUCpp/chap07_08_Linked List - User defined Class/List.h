#pragma once

template<typename T> struct Node
{
    T info;
    Node* next;
    Node(T val) : info(val), next(nullptr) {}
};

template <typename T> class List
{
    Node<T>* head;
    Node<T>* pCurr;
public:
    List() : head(nullptr), pCurr(nullptr) {}
    ~List();

    void addFront(const T& value);
    void removeFront();
    void moveFront() { pCurr = head; }
    bool moveNext();
    bool chkEmpty () const { return head == nullptr; }
    bool chkIfFront() const { return pCurr == head; }
    bool chkIfLast() const { return pCurr == nullptr || pCurr->next == nullptr; }
    T getValue() const { return pCurr->info; }
    bool setValue(const T& value);
};

template<typename T>
List<T>::~List()
{
    Node<T>* temp = head;
    while (temp) {
        head = temp->next;
        delete temp;
        temp = head;
    }
}

template<typename T>
void List<T>::addFront(const T& val)
{
    Node<T>* temp = new Node<T>(val);
    temp->next = head;
    head = temp;
    if (pCurr = nullptr) pCurr = head;
}

template<typename T>
void List<T>::removeFront()
{
    Node<T>* temp = head;
    if (pCurr == head) pCurr = head->next;
    head = head->next;
    delete temp;
}

template<typename T>
inline bool List<T>::moveNext()
{
    if (pCurr != nullptr && pCurr->next != nullptr)
    {
        pCurr = pCurr->next;
        return true;
    }
    return false;
}

template<typename T>
inline bool List<T>::setValue(const T& value)
{
    if (pCurr != nullptr)
    {
        pCurr->info = value;
        return true;
    }
    return false;
}
