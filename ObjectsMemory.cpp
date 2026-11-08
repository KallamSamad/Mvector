// ObjectsMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <crtdbg.h>
#include "MVector.h"
using namespace std;
int main()
{
#ifdef _DEBUG
	// _CrtSetBreakAlloc(158);
	_onexit(_CrtDumpMemoryLeaks);
#endif
	MVector* vector1 = new MVector(10);
	MVector* vector2 = new MVector(10);
	for (int i = 0; i < 10; i++) {
		vector1->setElement(i, i + 1);
		vector2->setElement(i, i + 1);
	}

	MVector vector3 = vector1->vectorSum(*vector2);
	 

	vector3.display();

	 

	cout << vector3.magnitude();

	vector3.normalised().display();

	double vector4=vector1->dotProduct(*vector1);

	cout << vector4;
	cout << "Doing something";
	delete vector1;

	return 0;
}


	// do some MVector stuff
	// 
	// 
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
