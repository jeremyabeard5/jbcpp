//============================================================================
// Name        : pointerPractice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void exercise8p2(), exercise8p4(), exercise8p5();

int main() {
	//exercise8p2();
	//exercise8p4();
	exercise8p5();
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
