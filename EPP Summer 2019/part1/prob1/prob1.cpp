

// Compile using following commands:
// g++ prob1.cpp
// ./a.out

#include <iostream>
#include <string>

using namespace std;


// Implement printArray here
void printArray(int myarray[], int n){

   // loop through each elements in myarray
   // and print it using count inbuilt method
   for(int i = 0 ; i < n ; i++){

       cout << myarray[i] << " ";
   }

   // print endline
   cout << endl;
}


// Implement countEven here
int countEven(int myarray[], int n){

   // initialize count to zero
   int count = 0;

   // loop through each elements in myarray
   for(int i = 0 ; i < n ; i++){

       // if the current element is divisible by 2
       // increase the count
       if(myarray[i]%2 == 0)
           count++;
   }

   // return count
   return count;
}

// EDIT CODE BELOW ONLY FOR TESTING (YOUR CODE WILL BE GRADED WITH DIFFERENT TESTS)
int main() {
  {
    int myarray[100] = {10, 20, 5, 10, 24};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (countEven(myarray, n) == 4)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 4" << endl;
  }
  {
    int myarray[100] = {15, 24, 30, 10, 5};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (countEven(myarray, n) == 3)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 3" << endl;
  }
  return 0;
}
