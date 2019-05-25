#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double integer[10];
	int x, y, z, smallest, largest;
	double total, average;
	
	cout << "Enter 10 integers:" << endl;
	
	for (x = 0; x < 10; x++)
	cin >> integer[x];
	
	y = 0;
	for (x = 1; x < 10; x++)
		if (integer[y] < integer[x])
		y = x;
	
	for (x = 1; x < 10; x++)
		if (integer[z] > integer[x])
		z = x;
	
	smallest = integer[z];
	largest = integer[y];
	
	cout << "The smallest integer is " << smallest << endl;
	cout << "The largest integer is " << largest << endl;
	
	total = 0;
	for (x = 0; x < 10; x++)
	total = total + integer[x];
	average = total/10;
	
	cout << "The total is " << total << endl;
	cout << "The average is " << average << endl;
	
	_getch();
	return 0;
}
