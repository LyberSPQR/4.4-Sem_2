#pragma once
#include <iostream>
using namespace std;

class vector
{
	const int maxSize = 100;
	int size = 0;
	int* array;

public:

	vector();
	vector(int size);
	vector(const vector& vec);
	vector(vector&& other);


	void setVectorSize();
	void fillVector();
	void fillVectorRand();
	void outVector();
	int getVectorSize();
	int getVectorElement(int index);
	void replaceVectorElement(int index, int temp);
	void actionsWithScalar(int scalar);
	void findingScalarLenght();
	void actionsWithOtherVector(vector& vec, vector& FinalVec);
	void Func(vector& vec, vector& FinalVec);

	~vector();


};