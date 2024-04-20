#include <iostream>
#include <windows.h> 
using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0E);

	cout << "\"U lukomor'a dub zelenij,\n "
		<<"Zlataya zep na dupe tom,\n "
		<<"I dnem i nochju kot uchenij\n "
		<<"vse hodit po cepi krugom\""
		<<endl;
	SetConsoleTextAttribute(hConsole, 0x0A);

	system("pause");
	return 0;
}
