//============================================================================
// Name        : pointerPractice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void exercise8p2(), exercise8p4(), exercise8p5(), exercise8p6(), exercise8p7();

int main() {
	//exercise8p2();
	//exercise8p4();
	//exercise8p5();
	//exercise8p6();
	exercise8p7();
	return 0;
}

void exercise8p2()
{
	int age = 40;
	int* pInteger = &age; //pointer

	//Display pointer value
	cout << "Integer age is located at : " << pInteger << endl; // prints pointer
}

void exercise8p4()
{
	int age = 30;
	int dogsAge = 9;

	cout << "int age is " << age << endl;
	cout << "int dogsAge is " << dogsAge << endl;

	int *pAge = &age;
	int *pDogsAge = &dogsAge;

	cout << "int* pAge is " << pAge << endl;
	cout << "int* pDogsAge is " << pDogsAge << endl;

	cout << "*pAge is " << *pAge << endl;
	cout << "*pDogsAge is " << *pDogsAge << endl;
}

void exercise8p5()
{
	int dogsAge = 30;
	cout << "Initialized dogsAge = " << dogsAge << endl;

	int* pDogsAge = &dogsAge;
	cout << "pDogsAge points to dogsAge" << endl;
	cout << "pDogsAge points to " << pDogsAge << endl;
	cout << "*pDogsAge = " << *pDogsAge << endl;

	cout << "Enter an age for your dog: ";
	cin >> *pDogsAge;

	cout << "Input stored using pDogsAge at " << pDogsAge << endl;
	cout << "Integer dogsAge = " << dogsAge << endl;
}

void exercise8p6()
{
	int age = 30;
	double Pi = 3.14159;
	char sayYes = 'y';
	float floater = 1.123456;

	int* pAge = &age;
	double* pPi = &Pi;
	char* pSayYes = &sayYes;
	float* pFloater = &floater;

	cout << "sizeof fundamental types -\n";
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(float) = " << sizeof(float) << endl;

	cout << "\nsizeof pointers to fundamental types -\n";
	cout << "sizeof(pInt) = " << sizeof(pAge) << endl;
	cout << "sizeof(pDouble) = " << sizeof(pPi) << endl;
	cout << "sizeof(pChar) = " << sizeof(pSayYes) << endl;
	cout << "sizeof(pFloat) = " << sizeof(pFloater) << endl;

}

void exercise8p7()
{
	int* pAge = new int;

	cout << "Enter your dog's age :";
	cin >> *pAge;

	cout << "Age " << *pAge << " is stored at " << pAge << endl;

	delete pAge;
}
