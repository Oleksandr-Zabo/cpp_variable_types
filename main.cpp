#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double R01, R0;
	float R1,R2,R3;
	cout << "Wite R1:  ";
	cin>> R1;
	cout << endl;
	cout << "Wite R2:  ";
	cin >> R2;
	cout << endl;

	cout << "Wite R3:  ";
	cin >> R3;
	cout << endl;

	R01 =  (1 / R1) + (1 / R2) + (1 / R3);
	R0 = 1 / R01;


	cout << "R0 = " << setprecision(7)<<R0<<endl;
	system("pause");
	return 0;
}
