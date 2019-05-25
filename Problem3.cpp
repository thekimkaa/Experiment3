#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char letter[] = {'e', 'n', 'g', '1', '9', '0', '7'};
	char reverse[7];
	
	reverse[0] = letter[5];
	reverse[1] = letter[3];
	reverse[2] = letter[6];
	reverse[3] = letter[4];
	reverse[4] = letter[0];
	reverse[5] = letter[2];
	reverse[6] = letter[1];
	
	cout << reverse << endl;
	cout << "The size of the array: " << sizeof(reverse);
	
	_getch();
	return 0;
}
