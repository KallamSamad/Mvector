#include "MVector.h"
#include <iostream>
using namespace std;
MVector::MVector(int size)
{
	cout << "Constructor called asking for " << size << " items\n";
	// remember what the size is for this object
	this->size = size;
	values = new double[size];
	// need to dynamically create an array of doubles
	// and store the pointer in the object's values variable
	// values = ...
}
MVector::~MVector()
{
	cout << "Clean up this object's memory\n";
	delete[] values;
	// need to clean up array pointed to by the object's
	// values variable
}
void MVector::setElement(int index, double value) {
	values[index] = value;
}

void MVector::display() {
	for (int i = 0; i < size; i++) {
		setElement(i, i+1);
		cout << this->values[i]<<"\n";
	}
}