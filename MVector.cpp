#include "MVector.h"
#include <iostream>
#include <cmath> 
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
		cout << this->values[i] << " ";

	};
}

MVector MVector::vectorSum(const MVector& a) {
	MVector result = MVector(size);
	if (this->size == a.size) {

		for (int i = 0; i < size; i++) {
			result.values[i] = this->values[i] + a.values[i];
		}
	}
	else {
		cout << "Vectors are not same size"<<"\n";
	}
	return result;

}

double MVector::magnitude() {
	int runningTotal=0;
	for (int i = 0; i < size; i++) {
		runningTotal+=pow(this->values[i],2);
	}
	double result=sqrt(runningTotal);
	return result;
}

MVector MVector::normalised() {
	MVector result = MVector(size);
	double magnitude=this->magnitude();
	for (int i = 0; i < size; i++) {
		result.values[i] = this->values[i] / magnitude;
	}
	return result;
}