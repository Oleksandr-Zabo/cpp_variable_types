#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double S;
	float V, t, a;
	cout << "Enter the speed (V): ";
	cin >> V;
	cout << "Enter the time (t): ";
	cin >> t;
	cout << "Enter acceleration (a): ";
	cin >> a;
	S = V * t + (a * t * t) / 2;
	cout << "Displacement (S) = "
		<< setprecision(5) <<S<<endl;  
	system("pause");
	return 0;
}
