#include "stdafx.h"
#include "Complex.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char oper = ' ';
	Complex *MyComplex1 = new Complex;
	Complex *MyComplex2 = new Complex;
	Complex *NewComplex = new Complex;
	printMenu();
	oper = whichOp(oper);
	switch (oper)
	{
	case '+':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		NewComplex->complexAdd(MyComplex1, MyComplex2);
		break;
	case '-':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		NewComplex->complexSub(MyComplex1, MyComplex2);
		break;
	case '*':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		NewComplex->complexMult(MyComplex1, MyComplex2);
		break;
	case '/':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		NewComplex->complexDiv(MyComplex1, MyComplex2);
		break;
	case 'M':
	case 'm':
		NewComplex->complexModule(NewComplex);
		break;
	default:
		printError();
		break;
	}
	system("pause");
	delete MyComplex1;
	delete MyComplex2;
	delete NewComplex;
}