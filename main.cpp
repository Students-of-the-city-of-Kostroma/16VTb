#include "lexer.h"

#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
#include <stack>

using namespace std;
int main()
{
	setlocale(0, "");

	char a[10000] = { 0 };
	char out[10000] = { 0 };
	stack <char> S;
	int i = 0;


	cout << "Ââåäèòå âûðàæåíèå: ";
			gets_s(a);
	opn(a, out);
	cout << "Âûðàæåíèå â ÎÏÇ: " << out << endl;
	cout << "Îòâåò: " << Calc(out) << "\n\n";


	_getch();
	return 0;
}
