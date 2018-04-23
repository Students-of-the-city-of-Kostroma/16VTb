#include "lexer.h"

using namespace std;

int main()
{
	string expression;
	cout << "Enter expression? ";
	getline(cin, expression);
	cout << "Your expression is: " << expression << endl;

	Lexer lex(expression);

	cout << "result is: " << lex.eval() << endl;
	system("pause");
}