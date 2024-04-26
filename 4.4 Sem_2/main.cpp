// 4.4 Sem_2.cpp
//
#include "vector.h"
#include <iostream>
#include <time.h>
using namespace std;



int main()
{
	srand(time(NULL));
	//vector vec1;
	//vec1.setVectorSize();
	//vec1.fillVector();
	//vec1.fillVectorRand();
	//vec1.outVector();

	/*vec1.replaceVectorElement(1, 100);*/
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

	vector vec3;
	vector vec1;
	vec1.setVectorSize();
	vec1.fillVector();
	vec1.outVector();
	vector vec2;
	vec2.setVectorSize();
	vec2.fillVector();
	vec2.outVector();
	vec1.Func(vec2, vec3);
	vec3.outVector();
}

