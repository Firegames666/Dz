#pragma once

#include <iostream>
#include <string>

using namespace std;

class Drob
{
private:
	int chisl;
	int znamen;
	int NOD(int x, int y)
	{
		if (y == 0) return x;
		return NOD(y, x % y);
	}
public:
	void input(int c, int z)
	{
		chisl = c;
		znamen = z;
	}
	void mult(int x)
	{
		chisl *= x;
		cout << "�����:  " << chisl << '/' << znamen << endl;
	}
	void div(int x)
	{
		znamen *= x;
		cout << "�����:  " << chisl << '/' << znamen << endl;

	}

	void sum(int x)
	{
		chisl += (x * znamen);
		cout << "�����:  " << chisl << '/' << znamen << endl;
	}
	void sub(int x)
	{
		chisl -= (x * znamen);
		cout << "�����:  " << chisl << '/' << znamen << endl;

	}
	void show()
	{
		cout << "������� �����:  " << chisl << '/' << znamen << endl;
	}
	int peredacha()
	{
		return NOD(chisl, znamen);
	}
	void reduct(int x)
	{
		chisl /= x;
		znamen /= x;
	}


};

