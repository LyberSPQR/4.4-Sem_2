#include "vector.h"
#include <iostream>
#include <time.h>

Vector Vector :: operator + (int scalar)
{
	
	for (int i = 0; i < this->size; i++)
	{
		array[i] += scalar;
	}
		return *this;
}
Vector Vector :: operator - (int scalar)
{

	for (int i = 0; i < this->size; i++)
	{
		array[i] -= scalar;
	}
	return *this;
}
Vector Vector :: operator * (int scalar)
{

	for (int i = 0; i < this->size; i++)
	{
		array[i] *= scalar;
	}
	return *this;
}
Vector Vector :: operator / (int scalar)
{

	for (int i = 0; i < this->size; i++)
	{
		array[i] /= scalar;
	}
	return *this;
}

Vector Vector :: operator + ( Vector& vector)
{
	for (int i = 0; i < this->size; i++)
	{
		array[i] += vector.array[i];
	}
	return *this;
}
Vector Vector :: operator - ()
{
	for (int i = 0; i < this->size; i++)
	{
		array[i] *= -1;
	}
	return *this;
}
Vector Vector :: operator - (const Vector& vector)
{
	for (int i = 0; i < this->size; i++)
	{
		array[i] -= vector.array[i];
	}
	return *this;
}
Vector Vector :: operator * (const Vector& vector)
{
	for (int i = 0; i < this->size; i++)
	{
		array[i] *= vector.array[i];
	}
	return *this;
}
Vector Vector :: operator / (const Vector& vector)
{
	for (int i = 0; i < this->size; i++)
	{
		array[i] *= vector.array[i];
	}
	return *this;
}
int Vector :: operator [] (int index)
{
	return this->array[index];
}
int Vector :: operator + (const Vector& vector)
{
	int sum = 0;
	for (int i = 0; i < this->size; i++)
	{
		sum += array[i] * vector.array[i];
	}
	return sum;
}

Vector :: Vector()
{
	array = new int[maxSize];
}
Vector::Vector(int size)
{
	this->size = size;
	array = new int[size];
}

Vector::Vector(const Vector& vec)
{
	this->size = vec.size;

	this->array = new int[this->size];

	for (auto i = 0; i < this->size; i++)
	{
		this->array[i] = vec.array[i];
	}
}

Vector::Vector(Vector&& other)
{
	this->size = other.size;
	this->array = new int[this->size];

	for (int i = 0; i < this->size; i++)
	{
		this->array[i] = other.array[i];
		other.array[i] = 0;
	}
}

Vector :: ~Vector()
{
	delete[] array;
	array = nullptr;
}
void Vector::fillVector()
{
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}
void Vector::fillVectorRand()
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 5 + 1;
	}
}
void Vector::outVector()
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
void Vector::setVectorSize(int size)
{
	this->size = size;
}
int Vector::getVectorSize()
{
	return this->size;
}
int Vector::getVectorElement(int index)
{
	if (index > size)
	{
		return 0;
	}
	return this->array[index];
}
ostream& Vector :: operator << (ostream& str)
{
	for (int i = 0; i < size; i++)
	{
		str << array[i] << " ";
	}
	return str;
}
istream& Vector :: operator >> (istream& str)
{
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	return str;
}
void Vector:: setVectorElement(int index, int data)
{
	if (index > size)
	{
		return;
	}

	this->array[index] = data;
}
void Vector::replaceVectorElement(int index, int temp)
{
	if (index > size)
	{
		return;
	}
	array[index] = temp;
}
void Vector::actionsWithScalar(int scalar)
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
void Vector::findingScalarLenght()
{
	double lenght, sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += (array[i] * array[i]);
	}
	lenght = sqrt(sum);
	cout << "Lenght of vector = " << lenght << endl;
}
void Vector::actionsWithOtherVector(Vector& vec, Vector& FinalVec)
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
