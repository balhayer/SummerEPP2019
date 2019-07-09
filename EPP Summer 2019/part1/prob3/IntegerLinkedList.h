
// Compile using following commands:
// g++ prob3.cpp
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

  // This is recursive function to count even numbers
   int countEvenRecurse(SNode *ptr) {

	// if statement is current node will be null, then its return 0
       if (ptr == NULL)
           return 0;

       // if statement is current node will data is even
       if (ptr->data % 2 == 0)

	//it call the recursive function again with adding 1 to it
           return 1 + countEvenRecurse(ptr->next);
       else
           //it will call the recursive function again without adding anything
           return countEvenRecurse(ptr->next);
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



  // continue from Problem 2
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
   int countEvenRecurseHelper() {
       return countEvenRecurse(head);
   }
};
