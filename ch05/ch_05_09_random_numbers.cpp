// ch_05_09_random_numbers.cpp
#include <iostream>
#include <cstdlib> // std::radn(), std::srand()
#include <ctime>
#include <random> //C++11

using namespace std;

int	getRandomNumber(int min, int max)
{
	static const double	fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() *fraction));
}

unsigned int PRINT() // pseudo random number generator
{
	static unsigned int seed = 5523;

	seed = 23432325 * seed  + 235453;

	return (seed % 32768);
}

int main()
{
	// std::srand(5323); // seed
	// std::srand(static_cast<unsigned int>(std::time(0)));

	// for (int count = 1; count <= 100; ++count)
	// {
	// 	cout << getRandomNumber(-42, 42) << "\t";
	// 	if (count % 5 == 0)
	// 		cout << endl;
	// }


	//  C 방식 정밀하게 할때는 rand()안쓰는게 낫다고 한다.
	// for (int count = 1; count <= 100; ++count)
	// {
	// 	cout << rand() % 4 + 5 << "\t";
	// 	if (count % 5 == 0)
	// 		cout << endl;
	// }

	std::random_device rd;
	std::mt19937	mesenne(rd()); // create a mesenne twister, seeding
	std::uniform_int_distribution<> dice(1, 6); // normal, 포아송 통계방식

	for (int count = 1; count <= 20; ++count)
		cout << dice(mesenne) << endl;

}