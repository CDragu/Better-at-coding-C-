// Better-at-coding-03.cpp : Defines the entry point for the console application.
//Design an algorithm and write code to remove the duplicate characters in a string
//without using any additional bu#er.NOTE: One or two additional variables are !ne.
//An extra copy of the array is not.
//FOLLOW UP
//Write the test cases for this method.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main();

void MakePure1();

char *pc[255];

int main()
{
	cout << "Hello, Tell me and I will make you pure!" << endl;
	char c[255];
	cin.get(c,255);
	*pc = c;
	MakePure1();
	cout << c << endl;
	system("PAUSE");
    return 0;
}


void MakePure1() {
	if (strlen((*pc)) == 1 || strlen((*pc)) == 0) {
		return;
	}
	for (int i = 0; i <= strlen((*pc)); i++) {
		char c = (*pc)[i];
		for (int j = i + 1; j < strlen((*pc)); j++) {
			if ((*pc)[j] == c) {
				for (int k = j; k < strlen((*pc)); k++) {
					(*pc)[k] = (*pc)[k + 1];
				}j--;
			}
		}
	}
	return;
}
