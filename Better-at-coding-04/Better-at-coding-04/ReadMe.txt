========================================================================
    CONSOLE APPLICATION : Better-at-coding-04 Project Overview
========================================================================

// Better-at-coding-04.cpp : Defines the entry point for the console application.
//Write a method to decide if two strings are anagrams or not.
//


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "Welcome to an Anagram Teller:" << endl << "Write the first word:";
	string s1;
	cin >> s1;

	cout << "Write the second world:";
	string s2;
	cin >> s2;
	bool anagram = true;

	for (int i = 0; i < s1.length(); i++) {					//taking each letter of the first word
		for (int j = 0; j < s2.length(); j++) {				//check it with the letter form the second word
			if (s2[j] == s1[i]) {							//if it finds one the it removes it and starts again
				for (int k = j; k < s2.length(); k++) {
					s2[k] = s2[k + 1];
				}
				break;
			}
			if (j == s2.length() - 1) {						//if we arrive at the end of the second word and we did not find the letter it's not an anagram
				anagram = false;
			}
		}
	}
	
	if (anagram == true) {
		cout << "Yes your words are anagrams"<<endl;
	}
	else
	{
		cout << "NO your words are not anagrams"<<endl;
	}
	system("PAUSE");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
