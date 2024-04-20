#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double S;
	float L, pi=3.14;
	cout <<"Enter the length of the circle:  ";
	cin >> L;
	S = (L * L) / (4 * pi);
	cout << "Circle area: "<< setprecision(8) << S << endl;

	system("pause");
	return 0;
}
