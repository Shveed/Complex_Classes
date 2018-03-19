#include "stdafx.h"
#include "Complex.h"
#include <iostream>
using namespace std;

void printMenu()
{
	cout << "------------------------------------" << endl;
	cout << "Welcome to program 'ComplexCounter' " << endl;
	cout << "  First of all - choose operation " << endl;
	cout << "+ - addiction(+) " << endl;
	cout << "- - substraction(-)" << endl;
	cout << "* - multiplication(*)" << endl;
	cout << "/ - division(/)" << endl;
	cout << "M - module(m)" << endl;
	cout << "------------------------------------" << endl;
};

Complex Complex::complexCreate(Complex *x)
{
	cin >> x->real >> x->imag;
	return *x;
};

char whichOp(char op)
{
	cout << "Enter operation: ";
	cin >> op;
	return op;
};

void Complex::complexAdd(Complex *x, Complex *y)
{
	printResult(x->real + y->real, x->imag + y->imag);
};

void Complex::complexSub(Complex *x, Complex *y)
{
	printResult(x->real - y->real, x->imag - y->imag);
}

void Complex::complexMult(Complex *x, Complex *y)
{
		printResult(x->real * y->real - x->imag * y->imag, x->real * y->imag - y->real * x->imag);
}

void Complex::complexDiv(Complex *c1, Complex *c2)
{
	printResult((c1->real * c2->real + c1->imag * c2->imag) / (pow(c2->real, 2) + pow(c2->imag, 2)),
		(c1->imag * c2->real - c1->real * c2->imag) / (pow(c2->real, 2) + pow(c2->imag, 2)));
}

void Complex::complexModule(Complex *x)
{
	cout << "Enter complex: ";
	cin >> x->real >> x->imag;
	double m;
	m = sqrt(pow(x->real, 2) + pow(x->imag, 2));
	cout << "Module of your complex equals to: " << m << endl;
}

//complex complexCreateFromPolar(double absVal, double arg);
//int complexToString(complex c, char buffer[], int size);

void Complex::printResult(double a, double b)
{
	cout << "Real part equals to : " << a << endl;
	cout << "Imaginal part equals to : " << b << endl;
	cout << "Your complex is: (" << a << ";" << b << "i)";
};

void printError()
{
	cout << "Error. Enter correct operation!" << endl;
};