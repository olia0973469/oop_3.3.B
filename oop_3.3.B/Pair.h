//////////////////////////////////////////////////////////////////////////////
// Pair.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pair
{
	int first, second;
public:
	Pair() 
	{
		setFirst(0);
		setSecond(0);
	}

	Pair(int f, int s) 
	{
		setFirst(f);
		setSecond(s);
	}

	~Pair(void) { };

	void setFirst(int f) { first = f; };
	void setSecond(int s) { second = s; };

	int getFirst() { return first; };
	int getSecond() { return second; };

	friend istream& operator >> (istream& in, Pair& r);
	friend ostream& operator << (ostream& out, const Pair& r);

	friend bool operator==(const Pair& p1, const Pair& p2);
	friend bool operator>=(const Pair& p1, const Pair& p2);
	friend bool operator<=(const Pair& p1, const Pair& p2);
	friend bool operator>(const Pair& p1, const Pair& p2);
	friend bool operator<(const Pair& p1, const Pair& p2);
	friend bool operator!=(const Pair& p1, const Pair& p2);

	operator string () const;
};
