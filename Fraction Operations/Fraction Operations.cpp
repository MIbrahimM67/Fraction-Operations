
#include "Functions.h"

int main()
{
	int Numerator1, Denominator1,Choice, Numerator2, Denominator2;
	char choice2;
	do {
	cout << "Enter Numerator of the First Number" << endl;
	cin >> Numerator1;
	cout << "Enter Denominator of the First Number" << endl;
	cin >> Denominator1;

	cout << "Enter Numerator of the @nd Number" << endl;
	cin >> Numerator2;
	cout << "Enter Denominator of the 2nd Number" << endl;
	cin >> Denominator2;

	
		cout << "What operation do you want to perform? Press 1/2 or 3 to decide" << endl
			<< "1-Addition" << endl
			<< "2-Substration" << endl
			<< "3-Multiplication" << endl;
		cin >> Choice;
		while (Choice != 1 && Choice != 2 && Choice != 3)
		{
			cout << "Invalid Entry, please Enter 1,2 or 3 " << endl;
			cin >> Choice;
		}
		switch (Choice)
		{ case 1:
			Add(Numerator1, Denominator1, Numerator2, Denominator2);
			break;
		case 2:
			Substract(Numerator1, Denominator1, Numerator2, Denominator2);
			break;
		case 3:
			Multiplication(Numerator1, Denominator1, Numerator2, Denominator2);
			break;

		default:
			break;
		}
		cout << "Do you want to repeat the process? y/n" << endl;
		cin >> choice2;



	} while (choice2=='y' || choice2=='Y');


}


