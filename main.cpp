#include "OPN.h"

#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
#include <stack>
#include "lexer.h"

using namespace std;
int main()
{
	setlocale(0, "");


	char a[10000] = { 0 };
	char out[10000] = { 0 };
	stack <char> S;
	int i = 0;


	cout << "������� ���������: ";
			gets_s(a);
	opn(a, out);
	cout << "��������� � ���: " << out << endl;
	cout << "�����: " << Calc(out) << "\n\n";
int main()
{
	string expression;
	cout << "Enter expression? ";
	getline(cin, expression);
	cout << "Your expression is: " << expression << endl;


	_getch();
	return 0;
}