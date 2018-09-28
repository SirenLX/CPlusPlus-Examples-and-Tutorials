/*
// This example features the use of statements and flow control, how to properly initialize and utilize them
//
// Many of the flow control statements shown in this example requre a generic (sub)statement as part iof its syntax.
// This statement may either be a simple C++ statement, such as a single instruction, terminate with a semi-colon(;),
// or a compund statement. A compound staement is a group of statements (each of the terminated by its own semicolon),
// but all grouped together ina block, enclosed in curly braces: {}:
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Selection statements: if and else
	int a = 100;
	int b = 200;



	cout << "Results for selection statements:" << endl;

	// Iteration statements (loops)
	// Custom countdown using while

	int n = 10;

	// while loop
	cout << "Results for iteration statements:" << endl;

	while (n > 0)
	{
		cout << n << ", ";
		--n;
		if (n == 0)
			cout << "liftoff!" << endl;
	}

	// do-while loop
	string stra;
	do
	{
		cout << "Enter text: ";
		getline(cin, stra);
		cout << "You entered: " << stra << endl;
	} while (stra != "goodbye");

	// for loop
	for (int x = 10; x > 0; x--)
	{
		cout << x << ", ";
	}
	cout << "Liftoff!" << endl;

	// ranged-based for loop
	string strb { "Hello!" };
	string strc;
	strc = "Hello!";
	for (char c : strb)
	{
		cout << "[" << c << "]";
	}
	cout << '\n';
	for (char c : strc)
	{
		cout << "[" << c << "]";
	}
	cout << '\n';

	// break
	// break loop example
	cout << "Results for jump statements" << endl;

	for (int x = 10; x > 0; x--)
	{
		cout << x << ", ";
		if (x == 3)
		{
			cout << "countdown aborted!";
			break;
		}
	}

	// continue
	// continue loop example
	for (int x = 10; x > 0; x--)
	{
		cout << x << ", ";
		if (x == 5) continue;
		cout << x << ", ";
	}
	cout << "liftoff!" << endl;


	getchar();
	return 0;
}