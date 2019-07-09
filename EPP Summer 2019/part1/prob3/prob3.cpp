//
// EDIT THIS FILE ONLY FOR YOUR OWN TESTING
// WRITE YOUR CODE IN IntegerLinkedList.h
//

#include <iostream>
#include <string>
#include "IntegerLinkedList.h"

using namespace std;

int main() {
  {
    IntegerLinkedList mylist;
    mylist.addFront(10);
    mylist.addFront(17);
    mylist.addFront(23);
    mylist.addFront(17);
    mylist.addFront(92);
    if (mylist.countEvenRecurseHelper() == 2)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 2" << endl;
	// add one more number
    mylist.addFront(100);
    if (mylist.countEvenRecurseHelper() == 3)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 3" << endl;
  }
  {
    IntegerLinkedList mylist;
    cout << "Enter number of integers : ";
    int n, value;
    cin >> n;
    cout << "Enter " << n << " integers" << endl;
    for (int i = 0; i < n; i++) {
      cin >> value;
      mylist.addFront(value);
    }

    cout << "Output of countEvenRecurseHelper: " << mylist.countEvenRecurseHelper() << endl;
  }
}
