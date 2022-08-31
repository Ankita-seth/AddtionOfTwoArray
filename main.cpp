// AddtionOfTwoArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AdditionOfTwoArray.h"


/* 
* Write a method which takes two int type array of size 10 as input & out an array of same size with addtion of both input array elements.
*/


int main()
{
   AdditionOfTwoArray add;
    add.Add(add.inArray1, add.inArray2, &add.outResult);

    add.Display(add.outResult, 10);

    return 0;

















//{
//	AdditionOfTwoArray add;
//
//	int Elem1[2];
//	int Elem2[2];
//	/*cout << "Enter the elements for Array 1st: " << endl;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> Elem1[i];
//	}
//	
//	
//	cout << "Enter the elements for Array 2nd: " << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> Elem2[i];
//	}*/
//	
//	int Display;
//		//*Res[i] = Elem1[i] + Elem2[i];
//		//add.Display(*Res);
//		//cout << Res[i];
//	
//	add.Add(Elem1,Elem2,&Display);
//	//add.Display(&Display);
//	system("pause");
//	return 0;
}

