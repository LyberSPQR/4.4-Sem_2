// 4.4 Sem_2.cpp
//
#include "vector.h"
#include <iostream>
#include <time.h>
using namespace std;

Vector operator - (Vector& vector1, Vector& vector2);
ostream& operator << (ostream& str, Vector& r);
istream& operator >> (istream& str, Vector& r);

void Func(Vector& vec1, Vector& vec2, Vector& FinalVec)
{
	FinalVec.setVectorSize(3);
	int maxVec1 = INT_MIN;
	int maxVec2 = INT_MIN;

	for (int i = 0; i < 3; i++)
	{
		if (vec1.getVectorElement(i) > maxVec1)
		{
			maxVec1 = vec1.getVectorElement(i);
		}
		if (vec2.getVectorElement(i) > maxVec2)
		{
			maxVec2 = vec2.getVectorElement(i);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		int sum = vec1.getVectorElement(i) * maxVec1 + vec2.getVectorElement(i) * maxVec2;
		FinalVec.setVectorElement(i, sum);
	}
}

int main()
{
	srand(time(NULL));
//	Task 4.4
	//cout << endl << "Task 4.4" << endl;
	//Vector vec1;
	//Vector vec2;
	//Vector vec3;

	//vec1.setVectorSize(3);

	////vec1.fillVector();
	//cout << endl << "Rand Elements of vector:" << endl;
	//vec1.fillVectorRand();
	//vec1.outVector();
	//cout << endl;
	//cout << "Replace element under index 1 by number 100" << endl;
	//vec1.replaceVectorElement(1, 100);
	//vec1.outVector();
	//cout << endl << "Vector size: " << endl;
	//cout << vec1.getVectorSize() << endl;
	//cout << "Element of vector under index 2: " << endl;
	//cout << vec1.getVectorElement(2) << endl;

	//cout << "Realization of operation: actionsWithScalar" << endl;
	//vec1.actionsWithScalar(2);
	//vec1.outVector();
	//cout << endl <<  "Length of vector: ";
	//vec1.findingScalarLenght();

	//vec2.setVectorSize(3);
	//cout << endl << "Rand Elements of vector:" << endl;
	//vec2.fillVectorRand();
	//vec2.outVector();
	//cout << endl << "Realization of operation: actionsWithOtherVector" << endl;
	//vec1.actionsWithOtherVector(vec2, vec3);
	//vec3.outVector();

	//cout << "Replace element under index 1 by number 100" << endl;
	//vec1.replaceVectorElement(1, 1);
	//Func(vec1, vec2, vec3);
	//cout << endl << "Final vector" << endl;
	//vec3.outVector();


	// Task 4.5
	cout << endl << "Task 4.5" << endl;
	Vector vec4;
	Vector vec5;
	

/*
	vec4.setVectorSize(3);
	cout << endl <<  "Enter elements of vector" << endl;
	vec4.fillVector();
	cout << endl << "Elements of vector:" << endl;
	vec4.outVector();

	vec5.setVectorSize(3);
	cout << endl << "Enter elements of vector" << endl;
	vec5.fillVector();
	cout << endl << "Elements of vector:" << endl;
	vec5.outVector();

	cout << endl << "Operation - " << endl;
	vec4 - vec5;
	cout << endl << "Elements of vector:" << endl;
	vec4.outVector();
	cout << endl*/;


	//Task 4.6
	cout << endl << "Task 4.6" << endl;
	Vector vec6;
	Vector vec7;
	vec6.setVectorSize(3);
	vec7.setVectorSize(3);
	cout << endl << "Enter elements of vector" << endl;
	cin >> vec6;
	cout << endl << "Elements of vector:" << endl;
	cout << vec6;

	//cout << endl << "Enter elements of vector" << endl;
	//vec7.operator>>(cin);
	//cout << endl << "Elements of vector:" << endl;
	//vec7.operator<<(cout);
}

//Vector operator + (const Vector& vector, int scalar)
//{
//	Vector result(vector.size);
//	for (int i = 0; i < vector.size; i++)
//	{
//		result.array[i] = vector.array[i] + scalar;
//	}
//	return result;
//}
//
//Vector operator - (const Vector& vector, int scalar)
//{
//	Vector result(vector.size);
//	for (int i = 0; i < vector.size; i++)
//	{
//		result.array[i] = vector.array[i] - scalar;
//	}
//	return result;
//}
//
//Vector operator * (const Vector& vector, int scalar)
//{
//	Vector result(vector.size);
//	for (int i = 0; i < vector.size; i++)
//	{
//		result.array[i] = vector.array[i] * scalar;
//	}
//	return result;
//}
//
//Vector operator / (const Vector& vector, int scalar)
//{
//	Vector result(vector.size);
//	for (int i = 0; i < vector.size; i++)
//	{
//		result.array[i] = vector.array[i] / scalar;
//	}
//	return result;
//}
//
//Vector operator + (const Vector& vector1, const Vector& vector2)
//{
//	Vector result(vector1.size);
//	for (int i = 0; i < vector1.size; i++)
//	{
//		result.array[i] = vector1.array[i] + vector2.array[i];
//	}
//	return result;
//}

Vector operator - (Vector& vector1,  Vector& vector2)
{
	
	for (int i = 0; i < vector1.getVectorSize(); i++)
	{
		int temp;
		temp = vector1.getVectorElement(i) - vector2.getVectorElement(i);
		vector1.setVectorElement(i, temp);
	}
	return vector1;
}

//Vector operator * (const Vector& vector1, const Vector& vector2)
//{
//	Vector result(vector1.size);
//	for (int i = 0; i < vector1.size; i++)
//	{
//		result.array[i] = vector1.array[i] * vector2.array[i];
//	}
//	return result;
//}
//
//Vector operator / (const Vector& vector1, const Vector& vector2)
//{
//	Vector result(vector1.size);
//	for (int i = 0; i < vector1.size; i++)
//	{
//		result.array[i] = vector1.array[i] / vector2.array[i];
//	}
//	return result;
//}
//
//int operator + (const Vector& vector1, Vector& vector2)
//{
//	int sum = 0;
//	for (int i = 0; i < vector1.size; i++)
//	{
//		sum += vector1.array[i] * vector2.array[i];
//	}
//	return sum;
//}
//
//Vector  operator - (Vector& vector1)
//{
//	for (int i = 0; i < vector1.getVectorSize(); i++)
//	{
//		vector1.array[i] *= -1;
//	}
//	return vector1;
//}

ostream& operator << (ostream& out, Vector& r)
{
	for (int i = 0; i < r.getVectorSize(); i++)
	{
		out << r.getVectorElement(i) << " ";
	}
	return out;
}
istream& operator >> (istream& in, Vector& r)
{
	for (int i = 0; i < r.getVectorSize(); i++)
	{
		int temp;
		in >> temp;
		 r.setVectorElement(i,temp);
	}
	return in;
}