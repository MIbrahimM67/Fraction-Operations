#pragma once
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void Simplyfy(int& num, int& denom) {
	int commonDivisor = gcd(num, denom);
	num /= commonDivisor;
	denom /= commonDivisor;
}

void Add(int Num1, int Denom1, int Num2, int Denom2)
{
	int tempNom, tempDenom;
	tempNom = Num1 * Denom2 + Num2 * Denom1;
	tempDenom = Denom1 * Denom2;
	Simplyfy(tempNom, tempDenom);
	if (tempNom == 0)
	{
		tempDenom = 0;
	}
	else if (tempDenom == 0)
	{
		tempNom = 0;
	}

	cout << "The Addition of those two numbers is " << tempNom << "/" << tempDenom << endl;

}
void Substract(int Num1, int Denom1, int Num2, int Denom2)
{
	int tempNom, tempDenom;
	tempNom = Num1 * Denom2 - Num2 * Denom1;
	tempDenom = Denom1 * Denom2;
	Simplyfy(tempNom, tempDenom);
	if (tempNom == 0)
	{
		tempDenom = 0;
	}
	else if (tempDenom == 0)
	{
		tempNom = 0;
	}

	cout << "The Substraction of those two numbers is " << tempNom << "/" << tempDenom << endl;
}
void Multiplication(int Num1, int Denom1, int Num2, int Denom2)
{
	int tempNom, tempDenom;
	tempNom = Num1 * Num2;
	tempDenom = Denom1 * Denom2;
	Simplyfy(tempNom, tempDenom);
	if (tempNom == 0)
	{
		tempDenom = 0;
	}
	else if (tempDenom == 0)
	{
		tempNom = 0;
	}

	cout << "The Multiplication of those two numbers is " << tempNom << "/" << tempDenom << endl;
}



