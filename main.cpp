#include <iostream>
#include <windows.h> 

using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "\t\t\tName\t   : ";

	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "\"The war and the peace\" \n";


	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "\t\t\tAvtor\t   :   L.N. Tolstoj\n";

	cout << "\t\t\tIzdatelstvo:  Piter\n";

	cout << "\t\t\tPages\t   : ";
	SetConsoleTextAttribute(hConsole, 0x0D);
	cout << "500\n";

	SetConsoleTextAttribute(hConsole, 0x0A);


	

	system("pause");
	return 0;
}
