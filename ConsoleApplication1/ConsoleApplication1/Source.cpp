#include "count.h"
#include <iostream>

using namespace std;

specialcount::specialcount(int start, int end, int current, int step)
{

	if (current < start || current > end)
		current = start;
	else
		current = end;

}


specialcount::~specialcount(){//default deconstructor
}

int specialcount::getVal()
{
	return current;
};


specialcount specialcount::operator++(int)
{
	specialcount(start, end, current, step);
	current = current + step;
	if (current > end)
		current = start;
	return specialcount();
};

specialcount specialcount::operator--(int)
{
	specialcount(start, end, current, step);
	current = current - step;
	if (current < start)
		current = end;
	return specialcount();
};


specialcount specialcount::operator++()
{
	current = current + step;
	if (current > end)
		current = start;
	return specialcount(start, end, current, step);
};


specialcount specialcount::operator--()
{
	current = current - step;
	if (current < end)
		current = end;
	return specialcount(start, end, current, step);
};



