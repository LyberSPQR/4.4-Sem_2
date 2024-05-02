#pragma once
#include <iostream>
using namespace std;

class Vector
{
	const int maxSize = 100;
	int size = 0;
	int* array;

public:

	Vector();
	Vector(int size);
	Vector(const Vector& vec);
	Vector(Vector&& other);
	Vector operator + (int scalar);
	int operator + (const Vector& vector);
	Vector operator + ( Vector& vector);
	Vector operator - (int scalar);
	Vector operator * (int scalar);
	Vector operator / (int scalar);
	Vector operator - ();
	Vector operator - (const Vector& vector);
	Vector operator * (const Vector& vector);
	Vector operator / (const Vector& vector);
	int operator [] (int index);
	friend Vector operator - (const Vector& vector);
	friend Vector operator+(const Vector& vector, int scalar);
	friend Vector operator-(const Vector& vector, int scalar);
	friend Vector operator*(const Vector& vector, int scalar);
	friend Vector operator/(const Vector& vector, int scalar);
	friend Vector operator+(const Vector& vector1, const Vector& vector2);
	friend Vector operator-(const Vector& vector1, const Vector& vector2);
	friend Vector operator*(const Vector& vector1, const Vector& vector2);
	friend Vector operator/(const Vector& vector1, const Vector& vector2);
	friend int operator+(const Vector& vector1,  Vector& vector2);

	void setVectorElement(int index,int data);
	void setVectorSize(int size);
	void fillVector();
	void fillVectorRand();
	void outVector();
	int getVectorSize();
	int getVectorElement(int index);
	void replaceVectorElement(int index, int temp);
	void actionsWithScalar(int scalar);
	void findingScalarLenght();
	void actionsWithOtherVector(Vector& vec, Vector& FinalVec);
	~Vector();
};