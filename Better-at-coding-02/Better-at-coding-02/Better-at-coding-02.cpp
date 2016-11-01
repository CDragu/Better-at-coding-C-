// Better-at-coding-02.cpp : Defines the entry point for the console application.
//Write code to reverse a C-Style String. (C-String means that “abcd” is represented as
//!ve characters, including the null character.)

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	cout << "Tell me and I will mirror it" << endl;
	cin >> s;
	string is(s.length()+1, '0');
	int lenght = s.length()-1;
	int i = 0;
	while (lenght >= 0) {
		is[i] = s[lenght];
		lenght--;
		i++;
	}
	is[i] = NULL;
	cout << is << endl;
	system("PAUSE");
    return 0;
}

