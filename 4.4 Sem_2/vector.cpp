#include "vector.h"
#include <iostream>
#include <time.h>

vector :: vector()
{
	array = new int[maxSize];
}
vector::vector(int size)
{
	this->size = size;
	array = new int[size];
}

vector::vector(const vector& vec)
{
	this->size = vec.size;

	this->array = new int[this->size];

	for (auto i = 0; i < this->size; i++)
	{
		this->array[i] = vec.array[i];
	}
}

vector::vector(vector&& other)
{
	this->size = other.size;
	this->array = new int[this->size];

	for (int i = 0; i < this->size; i++)
	{
		this->array[i] = other.array[i];
		other.array[i] = 0;
	}
}

vector :: ~vector()
{
	cout << "destructor launch" << endl;
	delete[] array;
	array = nullptr;
}
void vector::fillVector()
{
	cout << "Enter elements of vector" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}
void vector::fillVectorRand()
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 5 + 1;
	}
}
void vector::outVector()
{
	cout << "Elements of vector:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
void vector::setVectorSize()
{
	cout << "Enter size of vector" << endl;
	cin >> this->size;
}
int vector::getVectorSize()
{
	cout << "Vector size = ";
	return this->size;
}
int vector::getVectorElement(int index)
{
	if (index > size)
	{
		cout << "The index is beyond the size of the vector" << endl;
		return 0;
	}
	cout << "Element of vector under index: " << index + 1 << " = ";
	return this->array[index];
}
void vector::replaceVectorElement(int index, int temp)
{
	if (index > size)
	{
		cout << "The index is beyond the size of the vector" << endl;
		return;
	}
	array[index] = temp;
}
void vector::actionsWithScalar(int scalar)
{
	int choice = 0;
	cout << " Choose operation: \n 1 - * \n 2 - : \n 3 - + \n 4 - -" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		for (int i = 0; i < size; i++)
		{
			array[i] *= scalar;
		}
		break;

	case 2:
		for (int i = 0; i < size; i++)
		{
			array[i] /= scalar;
		}
		break;
	case 3:
		for (int i = 0; i < size; i++)
		{
			array[i] += scalar;
		}
		break;
	case 4:
		for (int i = 0; i < size; i++)
		{
			array[i] -= scalar;
		}
		break;
	default:
		cout << "Incorrect choice, dumb";
		return;
	}
}
void vector::findingScalarLenght()
{
	double lenght, sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += (array[i] * array[i]);
	}
	lenght = sqrt(sum);
	cout << "Lenght of vector = " << lenght << endl;
}
void vector::actionsWithOtherVector(vector& vec, vector& FinalVec)
{
	if (size == vec.size)
	{
		FinalVec.size = size;
		int choice = 0;
		cout << " Choose operation: \n 1 - * \n 2 - : \n 3 - + \n 4 - -" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				FinalVec.array[i] = array[i] * vec.array[i];
			}
			break;

		case 2:
			for (int i = 0; i < size; i++)
			{
				FinalVec.array[i] = array[i] / vec.array[i];
			}
			break;
		case 3:
			for (int i = 0; i < size; i++)
			{
				FinalVec.array[i] = array[i] + vec.array[i];
			}
			break;
		case 4:
			for (int i = 0; i < size; i++)
			{
				FinalVec.array[i] = array[i] - vec.array[i];
			}
			break;
		default:
			cout << "Incorrect choice, dumb";
			return;
		}
	}
}
void vector::Func(vector& vec, vector& FinalVec)
{
	FinalVec.size = size;
	int maxVec1 = INT_MIN;
	int maxVec2 = INT_MIN;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > maxVec1)
		{
			maxVec1 = array[i];
		}
		if (vec.array[i] > maxVec2)
		{
			maxVec2 = vec.array[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		FinalVec.array[i] = array[i] * maxVec1 + vec.array[i] * maxVec2;
	}
}