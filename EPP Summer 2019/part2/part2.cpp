#include <iostream>
#include <string>
#include "BirthAnalysis.h"

using namespace std;

template <typename T>
bool testAnswer(const string &nameOfTest, const T& received, const T& expected) {
	if (received == expected) {
		cout << "PASSED " << nameOfTest << ": expected and received " << received << endl;
		return true;
	}
	cout << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
	return false;
}

int main() {
	{
		cout << "Testing with small data file ..." << endl;
		BirthAnalysis b("data1.txt");
		testAnswer("data1.txt: totalNumberOfBirths", b.totalNumberOfBirths(), 10);
		testAnswer("data1.txt: numberOfBirths in Stanislaus_County", b.numberOfBirths("Stanislaus_County"), 2);
		testAnswer("data1.txt: countyWithMostBirths", b.countyWithMostBirths(), (string)"Sutter_County");
	}
	{
		cout << "Testing with large data file ..." << endl;
		BirthAnalysis b("data2.txt");
		testAnswer("data2.txt: totalNumberOfBirths", b.totalNumberOfBirths(), 3076);
		testAnswer("data2.txt: numberOfBirths in Calaveras_County", b.numberOfBirths("Calaveras_County"), 81);
		testAnswer("data2.txt: countyWithMostBirths", b.countyWithMostBirths(), (string)"Amador_County");
	}
	// system("pause"); // uncomment to pause main program for testing in Visual Studio
	return (0);
}
