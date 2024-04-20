#include <iostream>
using namespace std;

int main()
{
	/*for (size_t i = 0; i <= 255; i++)
	{
		cout << i << " - " << char(i) << endl;
	}*/

	int left_top_line = 201;
	int top_line = 205;
	int right_top_line = 187;
	int vertical_line = 186;
	int left_top_right = 204;
	int right_top_left = 185;
	int center_down = 203;
	int center_top = 202;
	int down_right = 188;
	int down_left = 200;

	

	cout <<char(left_top_line);
	for (int i = 0; i < 84; i++) {
		cout << char(top_line);
	}
	cout << char(right_top_line)<<endl;

	cout << char(vertical_line) 
		<<"                                  "
		<<"Vremena goda"
		<<"                                      " << char(vertical_line) 
		<< endl;

	cout << char(left_top_right);
	for (int i = 0; i < 21; i++) {
		cout << char(top_line);
	}
	cout << char(center_down);

	
	for (int i = 0; i < 21; i++) {
		cout << char(top_line);
	}
	cout << char(center_down);

	
	for (int i = 0; i < 21; i++) {
		cout << char(top_line);
	}
	cout << char(center_down);
	
	for (int i = 0; i < 18; i++) {
		cout << char(top_line);
	}

	cout << char(right_top_left) << endl;

	cout << char(vertical_line)
		<< "       "
		<< "Zima"
		<< "          " << char(vertical_line) 

		<< "        " <<"Vesna"
		<<"        " << char(vertical_line)

		<< "         " << "Leto" 
		<< "        " << char(vertical_line)

		<< "       " << "Osen" 
		<< "       " << char(vertical_line)
		<< endl;


	cout << char(down_left);

	for (int i = 0; i < 21; i++) {
		cout << char(top_line);
	}
	cout << char(center_top);


	for (int i = 0; i < 21; i++) {
		cout << char(top_line);
	}
	cout << char(center_top);


	for (int i = 0; i < 21; i++) {
		cout << char(top_line);
	}
	cout << char(center_top);

	for (int i = 0; i < 18; i++) {
		cout << char(top_line);
	}

	cout << char(down_right)<<"\n" << endl;

	system("pause");
	return 0;
}
