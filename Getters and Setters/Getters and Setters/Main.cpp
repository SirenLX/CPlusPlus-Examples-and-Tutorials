/* 
// This example features the use of getters and setters and how to properly write and initialize getters and setters.
// 
// Getters and setters allows us to effectively protect our data and functions. This is a technique used greatly when
// creating classes. For each variable, a "get" method will return its value and a "set" method will set the value of 
// the variable.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Player
{
public:

	void Attack()
	{
		cout << "Player attacks" << endl;
	}

	// Getters
	int GetHealth() const { return health; }
	int GetMana() const { return mana; }

	// Setters
	void SetHealth(int h) { health = h; }
	void SetMana(int m) { mana = m; }

protected:

private:
	int health;
	int mana;
};

int main()
{
	Player grant;
	grant.SetHealth(30);
	cout << grant.GetHealth() << endl;
	system("pause");
	return 0;
}