#include <iostream>
#include "count.h"
#include <string> 

using namespace std;

int main()
{
	int num;

	cout << "Do you want to increment or decrement?" << endl;
	cout << "Increment=1" << endl;
	cin >> num;
	cout << "Decrement=2" << endl;
	cin >> num;

	if (num == 1)
	{
		for (int i = 0; i < 20; i++)
		{
		
			cout << c.getCurrent() << endl;
		}
	}
	else
	{
		for (int i = 0; i < 20; i++)
		{
			
			cout << c.getCurrent() << endl;
		}

	}

	return 0;
}