// 4.4 Sem_2.cpp
//
#include "vector.h"
#include <iostream>
#include <time.h>
using namespace std;


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
	//vector vec1;
	//vec1.setVectorSize();
	//vec1.fillVector();
	//vec1.fillVectorRand();
	//vec1.outVector();

	/*
			cout << "The index is beyond the size of the vector" << endl;
			vec1.replaceVectorElement(1, 100);*/
	/*vec1.outVector();*/

	//cout << vec1.getVectorSize() << endl;
	//cout << vec1.getVectorElement(2) << endl;

	//vec1.actionsWithScalar(2);
	//vec1.outVector();

	//vec1.findingScalarLenght();


	//vector vec3;
	//vector vec1;
	//vec1.setVectorSize();
	//vec1.fillVector();
	//vec1.outVector();
	//vector vec2;
	//vec2.setVectorSize();
	//vec2.fillVector();
	//vec2.outVector();
	//vec1.actionsWithOtherVector(vec2, vec3);
	//vec3.outVector();

	Vector vec1;
	
	

	vec1.setVectorSize(3);
	cout << endl <<  "Enter elements of vector" << endl;
	vec1.operator>>(cin);
	/*vec1.fillVector();*/
	cout << endl << "Elements of vector:" << endl;
	//vec1.outVector();
	vec1.operator<<(cout);

	//Vector vec3 = -vec1;
	//cout << endl << "Elements of vector:" << endl;
	///*vec3.outVector();*/
	//cout << vec3;
	//cout << endl << "Element = " << vec1[1];
	//cout << endl << "Elements of vector:" << endl;
	//vec1.outVector();

	//Vector vec2;
	//vec2.setVectorSize(3);
	//cout << endl << "Enter elements of vector" << endl;
	////vec2.fillVector();
	//cin >> vec2;
	//cout << endl << "Elements of vector:" << endl;
	//cout << vec2;
	//vec2.outVector();

	//vec1 - vec2;
	//cout << endl << "Elements of vector:" << endl;
	//vec1.outVector();

	//cout << endl << "Scalar (*) = " <<  vec1 + vec2;



	/*cout << endl << "Elements of vector:" << endl;*/
	//vec2.outVector();
	// 
	//Func(vec1, vec2, vec3);
	//cout << endl << "Final vector" << endl;
	//vec3.outVector();
}

Vector operator + (const Vector& vector, int scalar)
{
	Vector result(vector.size);
	for (int i = 0; i < vector.size; i++)
	{
		result.array[i] = vector.array[i] + scalar;
	}
	return result;
}

Vector operator - (const Vector& vector, int scalar)
{
	Vector result(vector.size);
	for (int i = 0; i < vector.size; i++)
	{
		result.array[i] = vector.array[i] - scalar;
	}
	return result;
}

Vector operator * (const Vector& vector, int scalar)
{
	Vector result(vector.size);
	for (int i = 0; i < vector.size; i++)
	{
		result.array[i] = vector.array[i] * scalar;
	}
	return result;
}

Vector operator / (const Vector& vector, int scalar)
{
	Vector result(vector.size);
	for (int i = 0; i < vector.size; i++)
	{
		result.array[i] = vector.array[i] / scalar;
	}
	return result;
}

Vector operator + (const Vector& vector1, const Vector& vector2)
{
	Vector result(vector1.size);
	for (int i = 0; i < vector1.size; i++)
	{
		result.array[i] = vector1.array[i] + vector2.array[i];
	}
	return result;
}

Vector operator - (const Vector& vector1, const Vector& vector2)
{
	Vector result(vector1.size);
	for (int i = 0; i < vector1.size; i++)
	{
		result.array[i] = vector1.array[i] - vector2.array[i];
	}
	return result;
}

Vector operator * (const Vector& vector1, const Vector& vector2)
{
	Vector result(vector1.size);
	for (int i = 0; i < vector1.size; i++)
	{
		result.array[i] = vector1.array[i] * vector2.array[i];
	}
	return result;
}

Vector operator / (const Vector& vector1, const Vector& vector2)
{
	Vector result(vector1.size);
	for (int i = 0; i < vector1.size; i++)
	{
		result.array[i] = vector1.array[i] / vector2.array[i];
	}
	return result;
}

int operator + (const Vector& vector1, Vector& vector2)
{
	int sum = 0;
	for (int i = 0; i < vector1.size; i++)
	{
		sum += vector1.array[i] * vector2.array[i];
	}
	return sum;
}

Vector  operator - (const Vector& vector1)
{
	for (int i = 0; i < vector1.size; i++)
	{
		vector1.array[i] *= -1;
	}
	return vector1;
}

//ostream& operator << (ostream& str, Vector& r)
//{
//	for (int i = 0; i < r.size; i++)
//	{
//		str << r.array[i] << " ";
//	}
//	return str;
//}
//istream& operator >> (istream& str, Vector& r)
//{
//	for (int i = 0; i < r.size; i++)
//	{
//		cin >> r.array[i];
//	}
//	return str;
//}