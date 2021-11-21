/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alejandro Pelaez
 */
#include <string>
#include <iostream>

using namespace std;

int main()
{
	double number1;
	double number2;
	string operation;
	double result;
	cout << "Enter two numbers followed by an operation: ";
	cin >> number1 >> number2 >> operation;

	if (operation == "+" || operation == "plus")
	{
		result = number1 + number2;
		cout << "The sum of " << number1 << string(" and ") << number2 << string(" is ") << result;
	}
	if (operation == "-" || operation == "minus")
	{
		result = number1 - number2;
		cout << "The result of subtracting " << number1 << string(" and ") << number2 << string(" is ") << result;
	}
	if (operation == "mul" || operation == "*")
	{
		result = number1 * number2;
		cout << "The sum of " << number1 << string(" and ") << number2 << string(" is ") << result;
	}
	if (operation == "div" || operation == "/")
	{
		result = number1 / number2;
		cout << "The result of dividing " << number1 << string(" and ") << number2 << string(" is ") << result;
	}
}