//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include "Money.h"
#include "Pair.h"
#include <iostream>

int main() 
{
	Pair p1, p2, p3;

	cout << "p1 = " << endl; cin >> p1;
	cout << "p2 = " << endl; cin >> p2;

	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;

	if (p1 >= p2) 
	{
		cout << "p1 >= p2" << endl;
	}
	else cout << "p1 !>= p2" << endl;

	if (p1 <= p2) 
	{
		cout << "p1 <= p2" << endl;
	}
	else cout << "p1 !<= p2" << endl;

	if (p1 > p2) 
	{
		cout << "p1 > p2" << endl;
	}
	else cout << "p1 !> p2" << endl;

	if (p1 < p2) 
	{
		cout << "p1 < p2" << endl;
	}
	else cout << "p1 !< p2" << endl;

	Money t;
	Money mon1;
	Money mon;
	Money mon2(mon);
	Money mon3(mon2);
	int d;
	cout << " Hryvni = "; cin >> d;
	t.SetHr(d);
	cout << " Kopijky = "; cin >> d;
	t.SetKop(d);
	Money add;
	add = mon1 + mon2;
	cout << "Add: " << add << endl;

	cout << "mon1 sum devide by 2: " << mon2 / mon3 << endl;

	cout << "mon2/mon3 = " << mon1 / 2 << endl;

	return 0;
}