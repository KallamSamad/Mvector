#pragma once
#pragma once
class MVector
{
public:
	MVector(int size);
	~MVector(); // this is your destructor
	void setElement(int index,double value);
	void display();
	MVector vectorSum(const MVector& a);
	double magnitude();
	MVector normalised();
	double dotProduct(const MVector& a);

private:
	// number of elements this MVector represents
	int size;
	// pointer to an array of doubles
	double* values = nullptr;
};