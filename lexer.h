#ifndef lexer_h
#define lexer_h

#include <iostream>
#include <string>

using namespace std;

int charToNumber(char);
bool isInNumbers(char);
int parseLexem(char);

class Lexer {
protected:
	string expression;
public:
	Lexer(string);
	bool isNumber(int);
	bool isSimpleNumber(int);
	int calculateTemp(int, int, int);
	int eval();
};

#endif