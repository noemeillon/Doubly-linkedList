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

Copy-paste the stringBuilder.java code into an online Java compiler. I would recommend this [website](https://www.jdoodle.com/online-java-compiler/).

Input the different parameters (target string, cloning cost, appending cost) you wont to run the program with in the CommandLine Arguments field (see exemple below).

<div align = "center">
     <img src = "https://user-images.githubusercontent.com/39555683/129485159-377b9648-af67-485c-9c3c-70997ab8fb5c.png" />
</div>

##### Local Compiler

You can copy-paste stringBuilder.java in a existing java project to run it.

Then run the following commands (in this case abcdefghabcdefgh is the target string, 2 is the cloning cost and 4 is the appending cost):

<div align = "center">
     <img src = "https://user-images.githubusercontent.com/39555683/129485211-41d4d468-ae31-4977-981e-b3755b73e481.png" />
     <img src = "https://user-images.githubusercontent.com/39555683/129485214-dc6f23dc-90d8-4d9a-af05-bac2690d32f4.png" />
</div>
