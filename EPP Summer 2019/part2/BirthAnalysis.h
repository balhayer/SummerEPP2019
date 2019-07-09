
// PART2
// final
// BirthAnalysis.h

// USE FOLLOWING COMMANDS in linux to run

// clang++ -std=c++14 part2.cpp
// g++ part2.cpp

// ./a.out

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

struct actualBirthday{  // declare structure as actualBirthday

string countryHouse; // declare countryHouse as string

int actualCount; // actualCount is assigned as integer and declared
};

#ifndef BIRTH_ANALYSIS_H
#define BIRTH_ANALYSIS_H

/*
BirthAnalysis is assigned as class which uses actualBirthday as vector to store its data as actual total number of vector index
vector is being used to store the data from text file,
*/

// BirthAnalysis assigned as class
class BirthAnalysis{
vector<actualBirthday> vec;  // vector is used as structure which stores input data as births

public: // assigned public

// BirthAnalysis is a constructor which takes the text file and reads data into member variables.
BirthAnalysis(string file){

// reads the text file

ifstream in;  // reads the text file as input
in.open(file.c_str()); // it opens the text file and reads as c string
if(!in.fail()){  // if text file could not read, it will throw error as fail

int i=0;  // assigns i equals to 0
actualBirthday temporary; // assigns actualBirthday to temporary

while(!in.eof()){   // while loop is used to read input text file
in>>temporary.countryHouse>>temporary.actualCount; // input is read by using the temporary which counts
vec.push_back(temporary); // it pushes back to the vector while assigning value to temporary
i++; // it will post-increment the entire loop by one
}

}

}

// total number of birth assigned as integer value
// returns the number of births in a given county
int totalNumberOfBirths(){
return vec.size(); // it returns the whole vector size when execute

}

// numberOfBirths returns the total number of births in a specific given county
// returns the number of births in a given county
int numberOfBirths(string countryHouse){
int totalSum = 0; // totalSum is assigned as integer then to zero

for(int i=0; i<vec.size(); i++){  //for loop is used which compare the size between i and vector size
// then it post increment the entire vector size by one

if(vec[i].countryHouse == countryHouse) //if statement compares two values of vector countryHouse
//it compares by using operator signs if countryHouse is equal to countryHouse in vector size

totalSum += 1; // totalSum = totalSum + 1

// it applies formula here which makes totalSum equals to totalSum and add extra one to it to increment by one

}
return totalSum; // return totalSum
}

// declaration of Public Function below
// Returns the name of the county with most births as a string
string countyWithMostBirths(){

int old_count = 0, index = 0; //old actualCount and index assignes as zero
for(int i=0; i<vec.size(); i++){ // for loop is used then compare from i to vector size and increment

int specifyCount = 0;   //assigns the given actualCount equals to zero
for(int j=0; j<vec.size(); j++){

if(vec[i].countryHouse == vec[j].countryHouse) //if statement is used to compare two cities in the vector

specifyCount += vec[i].actualCount; // specifyCount = specifyCount + vector[i].actualCount
}

if(specifyCount>old_count){  // if statement is used, if given count is greater than old count it will assign following
// it will assign old count equals to given number of counts

old_count = specifyCount; // assigns old count equals to given number of counts

index = i; //assigns index equals to i

}

}

return vec[index].countryHouse; // returns the whole index in vector as countryHouse

}

};

#endif
// ends the program
