#pragma once
#include <iostream>
using namespace std;

class vector
{
	const int maxSize = 100;
	int size = 0;
	int* array;

public:

	vector()
	{
		array = new int[maxSize];
	}
	vector(int size)
	{
		this->size = size;
		array = new int[size];
	}

	vector(const vector& vec)
	{
		this->size = vec.size;

		this->array = new int[this->size];

		for (auto i = 0; i < this->size; i++)
		{
			this->array[i] = vec.array[i];
		}
	}

	vector(vector&& other)
	{
		this->size = other.size;
		this->array = new int[this->size];

		for (int i = 0; i < this->size; i++)
		{
			this->array[i] = other.array[i];
			other.array[i] = 0;
		}
	}

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

	~vector()
	{
		cout << "destr" << endl;
		delete[] array;
		array = nullptr;
	}

};