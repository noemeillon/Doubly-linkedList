#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

#include <utility>

#include <initializer_list>

template<typename T>
class LinkedList {
    private:
        Node<T>* head;
        Node<T>* tail;
        int count;

    public:
        // Default constructor
        LinkedList() : head(nullptr), tail(nullptr), count(0) {}

        // Default constructor using a list passed in the parameters
        LinkedList(const std::initializer_list<T> list) : head(nullptr), tail(nullptr), count(0) {
            for (const T element : list) {
                this->push_back(element);
            }
        }

        // Push an element T to the head of the list
        void push_front(T data) {
            Node<T>* node = new Node<T>(data);

            if (head == nullptr) {
                head = node;
                tail = node;
            }
            else {
                node->next = head;
                head->previous = node;
                head = node;
            }
            count++;
        }

        // Return the data that is being store at the head of the list
        T& front() const {
            return head->data;
        }

        // Push an element T to the end of the list;
        void push_back(T data) {
            Node<T>*node = new Node<T>(data);

            if (head == nullptr) {
                head = node;
                tail = node;
            }
            else {
                tail->next = node;
                node->previous = tail;
                tail = node;
            }
            count++;
        }

        // Return the data that is being store at the end of the list
        T& back() const {
            return tail->data;
        }

        // Return the number of nodes there is in the list
        int size() const {
            return count;
        }

        // Return an iterator pointing to the head of the list
        NodeIterator<T> begin() {
            NodeIterator<T> begin(head);

            return begin;
        }

        // Return an iterator pointing to nullptr (end of the least)
        NodeIterator<T> end() {
            NodeIterator<T> end(nullptr);

            return end;
        }

        // Read only iterator pointing to the head
         NodeIterator2<T> begin() const {
            NodeIterator2<T> begin(head);

            return begin;
        }

        // Read only iterator pointing to null ptr
        NodeIterator2<T> end() const {
            NodeIterator2<T> end(nullptr);

            return end;
        }

        // Switch the sens of the list: head is now tail and tail is now head
        void reverse() {
            Node<T>* headNode = head;
            Node<T>* currentNode = head;

            while (currentNode != nullptr) {
                Node<T>* nextNode = currentNode->next;
                Node<T>* previousNode = currentNode->previous;

                currentNode->next = previousNode;
                currentNode->previous = nextNode;
                currentNode = currentNode->previous;
            }

            head = tail;
            tail = headNode;
        }

        // Insert an element T in the list 
        NodeIterator<T> insert(NodeIterator<T> itrIn, T elementToInsert) {
            if (itrIn.getNode() != nullptr) {
                Node<T>* node =  new Node<T>(elementToInsert);

                if (itrIn == this->begin()) {
                    head->previous = node;
                    node->next = head;
                    head = node;
                }
                else {
                    node->next = itrIn.getNode();
                    node->previous = itrIn.getNode()->previous;
                    node->previous->next = node;
                    node->next->previous = node;
                }

                return NodeIterator<T> (node);
            }
            else {
                push_back(elementToInsert);

                return NodeIterator<T> (tail);
            }
        }

        // Delete a node from the list
        NodeIterator<T> erase(NodeIterator<T> itrIn) {
            if (itrIn == this->begin()) {
                if (count > 1) {
                    head->next->previous = nullptr;
                    head = itrIn.getNode()->next;

                    itrIn.getNode()->next = nullptr;
                    itrIn.getNode()->previous = nullptr;
                }
                else {
                    head = nullptr;
                    tail = nullptr;
                }

                delete itrIn.getNode();

                return this->begin();
            }
            else if (itrIn == NodeIterator<T> (tail)){
                if (count > 1) {
                    itrIn.getNode()->previous->next = nullptr;
                    tail = itrIn.getNode()->previous;
                    
                    itrIn.getNode()->next = nullptr;
                    itrIn.getNode()->previous = nullptr;
                }
                else {
                    head = nullptr;
                    tail = nullptr;
                }

                delete itrIn.getNode();

                return this->end();
            }
            else {
                Node<T>* node = itrIn.getNode();

                node->previous->next = node->next;
                node->next->previous = node->previous;

                NodeIterator<T> nodeIterator(node->next);

                delete itrIn.getNode();

                return nodeIterator;
            }
        }

        // Destuctor
        ~LinkedList() {
            Node<T>* currentNode = head;

            while (currentNode != nullptr) {
                Node<T>* nextNode = currentNode->next;
                delete currentNode;

                currentNode = nextNode;
            }

            head = nullptr;
            tail = nullptr;
        }
};


// do not edit below this line

#endif
