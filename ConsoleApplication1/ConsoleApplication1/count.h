#pragma once
#ifndef count_h
#define count_h
#include<iostream>
using namespace std;

class specialcount
{
public:

	specialcount(int start, int finish, int step, int value);

	int getVal();

	int start(int start);
	int stop(int stop);
	int stepInc(int stepInc);
	int stepDec(int stepInc);

	specialcount operator++(int);
	specialcount operator++();
	specialcount operator--(int);
	specialcount operator--();

	~specialcount();

private:
	int start;
	int end;
	int stepInc;
	int stepDec;


}
#endif


