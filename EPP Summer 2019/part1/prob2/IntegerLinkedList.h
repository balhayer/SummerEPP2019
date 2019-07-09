
// Compile using following commands:
// g++ prob2.cpp
// ./a.out


// ADD ANSWER TO THIS FILE

#pragma once

class SNode {
public:
  int data;
  SNode *next;
};

class IntegerLinkedList {
private:
  SNode *head;

  int countEvenRecurse (SNode *ptr) {
    return 2; // COMPLETE THIS FOR PROBLEM 3
  }

public:
  IntegerLinkedList() {
    head = nullptr;
  }

  void addFront(int x) {
    SNode *tmp = head;
    head = new SNode;
    head->next = tmp;
    head->data = x;
  }


  // count the even numbers in list and return the count
   int countEven(){

       int count = 0;       // count to keep track of even number count
       SNode *tmp = head;   // pointer to head of Linked List

       // it iterate through the list
       while (tmp != NULL)
       {
           // it checks the data if its current current node is even
           if (tmp->data % 2 == 0)
               count++;   // increase the counter by 1, if it is even
           tmp = tmp->next;
       }

       // it returns the even count
       return count;
   }


  // recursion helper function called from main
  int countEvenRecurseHelper () {
    return countEvenRecurse(head);
  }

};
