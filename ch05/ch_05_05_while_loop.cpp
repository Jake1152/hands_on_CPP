// ch_05_05_while_loop.cpp

#include <iostream>

using namespace std;

int main()
{
	// cout << 1 << endl;
	// cout << 2 << endl;
	// // ...
	// cout << 10 << endl;

	// int count = 1;
	// while (1)
	// {
	// 	cout << count << endl;
	// 	count++;

	// 	if (count == 10) break ;
	// }

	// cout << "While-loop test" << endl;

	// unsigned int count = 10;

	// while (count >= 0)
	// {
	// 	if (count == 0)
	// 		cout << "zero";
	// 	else
	// 		cout << count << " ";
	// 	count--;
	// }
	// cout << "While-loop test" << endl;

	// unsigned int count = 1;

	// while (count >= 0)
	// {
	// 	if (count % 55555555 == 0)
	// 		cout << "Hola " << count << endl;
	// 	// else
	// 	// 	cout << count << " ";
	// 	count++;
	// }

	cout << "While-loop test" << endl;

	int outer_count = 1;

	while (outer_count < 5)
	{
		int inner_count = 1;
		while (inner_count < 5)
		{
			cout << "outer_count : " << outer_count << " ";
			cout << "inner_count : " << inner_count << endl;
			inner_count++;
		}
		outer_count++;
	}

	return (0);
}