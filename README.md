## Doubly-linked List

### Implementation

In this project, the linked list is implemented in C++.

##### Node

Basic unit in a doubly doubly-linked list. It is composed of three fields:
- Data - The element that is being stored inside the node.
- Next node - The pointer to the following node in the doubly-linked list (nullptr for the tail of the list).
- Previous node - The pointer to the previous node in the doubly-linked list (nullptr for the head of the list).

The nodes within the linked-list are iterable, this the data structure can be iterated through in a for/while loop.

##### Doubly-linked List

The data structure is composed of a list of nodes that are connected to each others.

It is composed of three fields:
- Head - The pointer to the head of the list.
- Tail - The pointer to the beginning of the list.
- Count - The total number of nodes in the list.

and many functions to interact with the list such as:
- push_front(T data) - To insert an element to the head of the list.
- push_back(T data) - To insert an element to the tail of the list.
- reverse() - To reverse the list: All the nodes' pointers will be reversed.

<div align = "center">
     <img src = "https://user-images.githubusercontent.com/39555683/131362412-b87cb603-fbcd-47be-a2e4-e2ee55577b34.png" />
</div>
  
### How to run the program

##### Online Compiler

Copy-paste code from node.h, linkedlist.h and test.cpp into an online C++ compiler. I would recommend this [website](https://www.onlinegdb.com/online_c++_compiler) and press run.


<div align = "center">
     <img src = "https://user-images.githubusercontent.com/39555683/131363261-b2b1765a-109c-4f19-89bf-c360f446c460.png" />
</div>

##### Local Compiler

You can clone the following repository to run it on your local machine.

Then run the following commands:

<div align = "center">
     <img src = "https://user-images.githubusercontent.com/39555683/131363878-67f579af-c14f-4217-886f-c3b32285d309.png" />
     <img src = "https://user-images.githubusercontent.com/39555683/131364100-c8ec88f6-01e6-4fdc-bfaf-56b05595f175.png" />
</div>
