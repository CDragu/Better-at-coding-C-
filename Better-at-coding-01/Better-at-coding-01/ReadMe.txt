========================================================================
    CONSOLE APPLICATION : Better-at-coding-01 Project Overview
========================================================================

// Better-at-coding-01.cpp : Defines the entry point for the console application.
//Implement an algorithm to determine if a string has all unique characters. What if you
//can not use additional data structures ?

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "Now tell me in detail!" << endl;
	string s;
	cin >> s;
	bool flag = false;
	for (int i = 0; i < s.length() ; i++) {
		char c = s[i];
		for (int j = i+1; j < s.length(); j++) {
			if (s[i] == s[j]) {
				flag = true;
			}
		}
	}
	if (flag == true) {
		cout << "Your string has a duplicate in it" << endl;
	}
	else
	{
		cout << "Your string has only unique chars in it" << endl;
	}
	system("PAUSE");
    return 0;
}
========================================================================