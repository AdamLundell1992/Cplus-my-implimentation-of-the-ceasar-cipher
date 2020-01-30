// PracticalStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;






int main() {
	string input;
	int i;
	int count = 0, length;
	int number;
	cout << "Enter your word or phrase you want to convert here \n";
	cin >> input;
	cout << "enter a value \n" << "\n";
	cin >> number;
	length = input.length();

	for (count = 0; count < length; count++) {
		if (isalpha(input[count]))
		{
			input[count] = tolower(input[count]);
			for (int i = 0; i < number; i++) {
				if (input[count] == 'z') {
					input[count] == 'a';
				}
				else
					input[count]++;
			}
		}

	}


	cout << "result \n" << input;



	cout << "Enter your word or phrase you want to convert here \n";
	cin >> input;
	cout << "enter a value \n" << "\n";
	cin >> number;
	length = input.length();

	for (count = 0; count < length; count++) {
		if (isalpha(input[count]))
		{
			input[count] = tolower(input[count]);
			for (int i = 0; i < number; i++) {
				if (input[count] == 'z') {
					input[count] == 'a';
				}
				else
					input[count]--;
			}
		}

	}


	cout << "result \n" << input;




}