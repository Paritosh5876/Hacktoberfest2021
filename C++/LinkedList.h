#ifndef SIMPLELINKEDLIST_H_INC
#define SIMPLELINKEDLIST_H_INC

#include <new>
#include <vector>

// I am so happy I got templates to work with this!
template <typename T>
class Node {
private:
    T element;
    Node<T>* next;

    // Allows this class to access LinkedList's private members

    template<typename H>
    friend class LinkedList;
};



template <typename T>
class LinkedList {

public:
    // Constructor
    LinkedList() {
        header = NULL;
    }

    // Might not be the best way to do it, but my method of copy-constructing
    // is to store the elements in a vector and retrieve them via a vector as
    // well

    LinkedList(const LinkedList& v) {
        header = new(std::nothrow) Node<T>;
        //header->next = trailer;

        vector<T> ele = v.get_elements();
        set_elements(ele);
    }

    //~LinkedList() {


    //}

    LinkedList& operator=(const LinkedList& v) {
        header = new(std::nothrow) Node<T>;
        //header->next = trailer;

        vector<T> ele = v.get_elements();
        set_elements(ele);
        return *this;
    }

    void clear() {
        while (!empty()) {
            remove_front();
        }

        header = nullptr;
        delete(header);
    }

    // Destructor
    ~LinkedList() {
        while (!empty()) {
            remove_front();
        }
        delete header;
    }

    // returns a vector of all elements
    vector<T> get_elements() const {
        Node<T>* p = header;
        vector<T> elements;
        while (p != nullptr) {
            elements.push_back(p->element);
            p = p->next;
        }

        return elements;
    }

    void set_elements(vector<T> elementVec) {
        for (size_t x = elementVec.size(); x > 0; x--) {
            add_front(elementVec.at(x));
        }
    }

    size_t size();

    bool empty() const { return header == NULL; }

    Node<T>* search(T val);


    const T& front() const { return header->next->element; } // get front element

    void add_front(const T& e) {
        Node<T>* p = new(std::nothrow) Node<T>;
        p->element = e;
        p->next = header;
        header = p;

        if (header == nullptr) {
            // allocation failed
            remove_front();
        }
    } // add to front of list

    void remove_front() {
        if (!empty()) {

            Node<T>* old = header;
            header = old->next;
            delete old;

        }

    } // remove front val

    void remove(T key);

    void print_elements();

private:
    Node<T>* header = new(std::nothrow) Node<T>;

protected:
    void add(Node<T>* v, const T& e);


};

template <typename T>
void LinkedList<T>::remove(T key) {
    // Store head node
    Node<T>* temp = header;
    Node<T>* prev = nullptr;

    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->element == key)
    {
        header = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }

    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
    else
    {
        while (temp != NULL && temp->element != key)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        delete temp;
    }
}

template <typename T>
size_t LinkedList<T>::size() {
    Node<T>* p = header->next;
    size_t size = 0;
    while (p->next != nullptr) {
        p = p->next;
        size++;
    }

    return size;
}



// pretty inefficient if list is ordered
template <typename T>
Node<T>* LinkedList<T>::search(T val) {
    Node<T>* p = header;
    while (p != nullptr) {
        if (p->element == val) {
            // found
            return p;
        }
        p = p->next;
    }

    // not found
    return nullptr;
}

template <typename T>
void LinkedList<T>::print_elements() {
    if (header != nullptr) {
        Node<T>* p = header;
        while (p != nullptr) {
            std::cout << p->element << " ";
            p = p->next;
        }
    }
}







#endif