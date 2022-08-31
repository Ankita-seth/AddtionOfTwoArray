#pragma once
#include <iostream>
#include <string>
using namespace std;

#define ARRAY_LEN 10

class AdditionOfTwoArray
{
public:

	AdditionOfTwoArray()
	{
		inArray1 = new int[ARRAY_LEN];
		inArray2 = new int[ARRAY_LEN];
		outResult = NULL;
	}

	~AdditionOfTwoArray()
	{
		if (inArray1)
			delete[] inArray1;
		inArray1 = NULL;

		if (inArray2)
			delete[] inArray2;
		inArray2 = NULL;

		if (outResult)
			delete[] outResult;
		outResult = NULL;

	}
	
	int* inArray1;
	int* inArray2;	
	int* outResult;

	void Add(int* inArray1, int* inArray2, int** outResult)
	{
		InputArray(inArray1, inArray2);

		if (*outResult == NULL)
			*outResult = new int[ARRAY_LEN];
		
		int* pOut = *outResult;

		for (int cntr = 0; cntr < ARRAY_LEN; cntr++)
			pOut[cntr] = inArray1[cntr] + inArray2[cntr];

	}

	void InputArray(int* inArray1, int* inArray2)
	{

		cout << "Enter the elements for Array 1st: " << endl;

		for (int i = 0; i < ARRAY_LEN; i++)
		{
			cin >> inArray1[i];
		}
		cout << "Enter the elements for Array 2nd: " << endl;

		for (int i = 0; i < ARRAY_LEN; i++)
		{
			cin >> inArray2[i];
		}

		cout << endl;
		cout << "Elements of Array 1st are: " << endl;
		for (int i = 0; i < ARRAY_LEN; i++)
		{
			cout << inArray1[i] << "\t";
		}

		cout << endl;
		cout << "Elements of Array 2nd are: " << endl;
		for (int i = 0; i < ARRAY_LEN; i++)
		{
			cout << inArray2[i] << "\t";
		}
		cout << endl;
	}

	void Display(int* array, int size)
	{
		cout << "Addition of both arrays are: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << "\t";
		}
		cout << endl;


	}
};

