#include <iostream>
#include <conio.h>

using namespace std;

	const int prov = 3;
	const int day = 7;
	
int main()
{
	int tempe[prov][day];
	
	cout << "Enter all temperature for a week of Province A, Province B, and then Province C" << endl;
	
	for (int i = 0; i < prov; i++)
	{
		for (int j = 0; j < day; j++)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " : ";
			cin >> tempe[i][j];
		}
	}
	
	cout << "\nDisplaying values: " << endl;
	
	for (int i = 0; i < prov; i++)
	{
		for (int j = 0; j < day; j++)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " = " << tempe[i][j] << endl;
		}
	}	
	
	_getch();
	return 0;
	
}
