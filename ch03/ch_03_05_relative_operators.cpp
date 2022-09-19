// ch_03_05_relative_operators.cpp

#include <iostream>

int main()
{
	using namespace std;

	// while (true)
	// {
	// 	int x, y;
	// 	cin >> x >> y;
	// 	cout << "Your input values are : " << x << " and " << y << endl;

	// 	if (x == y)
	// 		cout << "equal" << endl;
	// 	if (x != y)
	// 		cout << "Not equal " << endl;
	// 	if (x > y)
	// 		cout << "x is greater than y" << endl;
	// 	if (x < y)
	// 		cout << "x is less than y" << endl;
	// 	if (x >= y)
	// 		cout << "x is greater than y or equal y" << endl;
	// 	if (x <= y)
	// 		cout << "x is less than or equal to y" << endl;
	// }

	// double	d1(100 - 99.99);	// 0.001
	// double	d2(10 - 9.99);		// 0.001

	// if (d1 == d2)
	// 	cout << "equal" << endl;
	// else
	// 	cout << "Not equal" << endl;
	// if (d1 > d2)
	// 	cout << "d1 > d2" << endl;
	// else // if(d1 < d2) because d1 != d2
	// 	cout << "d1 < d2" << endl;

	double	d1(100 - 99.99);	// 0.001
	double	d2(10 - 9.99);		// 0.001

	const double epsilon = 1e-10;
	
	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;
	return (0);
}

