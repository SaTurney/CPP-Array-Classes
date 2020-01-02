//Assign6.cpp
//Name: Sabrina Turney
//Date: July 3, 2019
// Assignment #6 - client application to test the Array class

#include <iostream>
#include <stdexcept>
#include <typeinfo>
#include "Array.h"
using namespace std;

template <class numbers>

void Process(Array < numbers >& arrayFirst, Array < numbers >& arraySecond)
{
	// print first array's size and contents
	cout << "Size of first Array object is "
		<< arrayFirst.getSize()
		<< "\nArray after initialization:\n" << arrayFirst;

	// print second array's size and contents
	cout << "\nSize of second Array object is "
		<< arraySecond.getSize()
		<< "\nArray after initialization:\n" << arraySecond;

	// input and print arrays
	cout << "\nEnter " << (arrayFirst.getSize() + arraySecond.getSize()) << " " << typeid(numbers).name() << " values:" << endl;
	cin >> arrayFirst >> arraySecond;

	cout << "\nAfter input, the Arrays contain:\n"
		<< "First Array object:\n" << arrayFirst
		<< "Second Array object:\n" << arraySecond;

	// use overloaded assignment (=) operator
	cout << "\nAssigning second Array object to the first Array object:" << endl;
	arrayFirst = arraySecond; // note target Array is smaller

	cout << "First Array object:\n" << arrayFirst
		<< "Second Array object:\n" << arraySecond;

	// use overloaded equality (==) operator
	cout << "\nEvaluating for equality" << endl;

	if (arrayFirst == arraySecond)
		cout << "The Array objects are equal" << endl;
	else
		cout << "The Array objects are not equal" << endl;

	// use overloaded subscript operator to create rvalue
	cout << "\nValue of first element in first Array object is " << arrayFirst[0] << endl;
}


int main()
{
	Array<int> integers1(2); // 2-element Array
	Array<int> integers2;// 3-element Array by default
	Array<double> doubles1(2); // 2-element Array
	Array<double> doubles2;// 3-element Array by default
	Array<char> chars1(2); // 2-element Array
	Array<char> chars2;// 3-element Array by default

	Process(integers1, integers2);
	Process(doubles1, doubles2);
	Process(chars1, chars2);

}


