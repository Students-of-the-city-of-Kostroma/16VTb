#include "stdafx.h"
#include "lexer.h"
#include <cassert>
#include <iostream> 
using namespace std;

int opn(int x, int y) { (x>10)&&(x<20)} { return x + y; }
void Testopn() {
	assert(opn(2, 3) == 5);
	cout << "Testopn OK" << endl;
}
int opn(int x, int y) { (x>10) && (x<20) } { return x * y; }
void Testopn() {
	assert(opn(1, 5) == 5);
	cout << "Testopn OK" << endl;
}
int opn(int x, int y)  { return x * y; }
void Testopn() {
	assert(opn(1000, 0) == 0);
	cout << "Testopn OK" << endl;
}
int opn(int x, int y) { return x * y; }
void Testopn() {
	assert(opn(-2, -2) == 4);
	cout << "Testopn OK" << endl;
}
int opn(int x, int y) { return x * x; }
void Testopn() {
	assert(opn(1, 0) == 2);
	cout << "Testopn OK" << endl;
}
int opn(int x, int y) { return x - y; }
void Testopn() {
	assert(opn(3,2) == 1);
	cout << "Testopn OK" << endl;
}
int opn(int x, int y) { return x - y; }
void Testopn() {
	assert(opn(-2, 5) == -7);
	cout << "Testopn OK" << endl;
}int opn(int x, int y) { return x * y; }
void Testopn() {
	assert(opn(0.2, 0.3) == 0.5);
	cout << "Testopn OK" << endl;
}

int main()
{
	Testopn;
	system("pause");
	return 0;
}