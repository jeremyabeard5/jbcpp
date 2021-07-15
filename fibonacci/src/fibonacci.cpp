//============================================================================
// Name        : fibonacci.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int GetFibNumber(int FibIndex)
{
	if (FibIndex < 2)
		return FibIndex;
	else
		return GetFibNumber(FibIndex - 1) + GetFibNumber(FibIndex - 2);
}

int main() {
	while (true)
	{
		cout << "Enter 0-based index of desired Fibonacci Number, -1 to Cancel: ";
		int Index = 0;
		cin >> Index;
		if (Index==-1)
			break;
		else
			cout << "Fibonacci number is: " << GetFibNumber(Index) << endl;
	}
	cout << "Thanks for playing. Exiting...";
	return 0;
}
