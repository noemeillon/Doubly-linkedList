#ifndef NODE_H
#define NODE_H

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

template<typename T>
class Node {
    public:
        T data;
        Node* next;
        Node* previous;

        // Constructor
        Node(T dataIn) : data(dataIn), next(nullptr), previous(nullptr) {}
};

template<typename T>
class NodeIterator {
    private:
        Node<T>* current;
    
    public:
        // Default constructor
        NodeIterator() : current(nullptr) {}

        // Constructor that sets the current pointer
        NodeIterator(Node<T>* currentIn) : current(currentIn) {}

        // Get the data of the node that the iterator is pointing to
        T& operator*() {
            return current->data;
        }

        // Get a pointer to the node it is pointing to
        Node<T>* getNode() {
            return current;
        }

        // Increment the iterator, it is now poiting to the next element
        void operator++() {
            this->current = current->next;
        }

        // Check if two iterators point to the same element
        bool operator==(NodeIterator<T> itr) { 
            return this->current == itr.getNode();
        }

        // Check if two iterators point todifferent elements
        bool operator!=(NodeIterator<T> itr) {
            return this->current != itr.getNode();
        }
};

template<typename T>
class NodeIterator2 {
  
    private:
        Node<T>* current;
    
    public:
        // Default constructor
        NodeIterator2() : current(nullptr) {}

        // Constructor that sets the current pointer
        NodeIterator2(Node<T>* currentIn) : current(currentIn) {}

        // Get the data of the node that the iterator is pointing to
        T& operator*() const {
            return current->data;
        }

        // Get a pointer to the node it is pointing to
        Node<T>* getNode() const {
            return current;
        }
        
        // Increment the iterator, it is now poiting to the next element
        void operator++() {
            this->current = current->next;
        }

        // Check if two iterators point to the same element
        bool operator==(NodeIterator2<T> itr) const { 
            return this->current == itr.getNode();
        }

        // Check if two iterators point todifferent elements
        bool operator!=(NodeIterator2<T> itr) const {
            return this->current != itr.getNode();
        }
};

#endif
