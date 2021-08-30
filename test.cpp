#include "linkedlist.h"

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

void test1() {
  LinkedList<int> linkedList{1,2,3,4};
  
  vector<int> numbersVector;
  
  for (auto & n : linkedList) {
    numbersVector.push_back(n);
  }
  
  vector<int> testVector{1,2,3,4};
  
  if (numbersVector == testVector) {
    
    cout << "Test number 1 - Passed \n";
  }
  else {
    
    cout << "Test number 1 - Failed | Should be getting { 1 2 3 4 } instead it got {";
    
    for (auto & n : numbersVector) {
      cout << " " << n;
    }
    
    cout << " }\n";
  }
}

void test2() {
  LinkedList<int> linkedList{1,2,3,4};
  
  auto itr = linkedList.begin();
  ++itr;
  
  itr = linkedList.insert(itr, 4);
  linkedList.erase(linkedList.begin());
  
  vector<int> numbersVector;
  
  for (auto & n : linkedList) {
    numbersVector.push_back(n);
  }
  
  vector<int> testVector{4,2,3,4};
  
  if (numbersVector == testVector) {
    
    cout << "Test number 2 - Passed \n";
  }
  else {
    
    cout << "Test number 2 - Failed | Should be getting { 4 2 3 4 } instead it got {";
    
    for (auto & n : numbersVector) {
      cout << " " << n;
    }
    
    cout << " } \n";
  }
}

void test3() {
  
  LinkedList<int> linkedList{10,20,30,40};
  
  auto itr = linkedList.begin();
  ++itr;
  
  itr = linkedList.insert(itr, 15);
  
  if (*itr == 15) {
    
    cout << "Test number 3 - Passed \n";
  }
  else {
    
    cout << "Test number 3 - Failed | Inserting then inserting 15 before 20 in { 10 20 30 40 } should return an iterator pointing to 15 but instead it got " << *itr << endl;
  }
}

int main() {
  test1();
  test2();
  test3();
  
  return 0; 
}
