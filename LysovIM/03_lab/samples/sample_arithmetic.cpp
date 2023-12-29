#include <iostream>
#include "stack.h"
#include "arithmetic.h"

using namespace std;

int main()
{
	try 
	{
		string str;
		cout << "Enter expression:";
		cout << "\n";
		getline(cin, str);
		MathArithmetics example(str);
		cout << "Postfix:" << example.ToPostfix() << endl;
		cout << "\n";
		example.SetValues();
		cout << "Result:" << example.Calculate() << endl;
	}
	catch (string exp)
	{
		cout << exp << endl;
	}
	return 0;
}