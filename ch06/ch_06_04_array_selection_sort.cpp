// ch_06_04_array_selection_sort.cpp


#include <iostream>

using namespace std;

void    print_array(int array[], int length)
{
	for (int index = 0; index < length; index++)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	const int length = 5;

	int  array[length] = { 3, 5, 2, 1, 4};

	print_array(array, length);

	// swap()
	for (int start_idx = 0; start_idx < length - 1; ++start_idx)
	{
		int smallest_idx = start_idx;

		for (int cur_idx = start_idx + 1; cur_idx < length; ++cur_idx)
		{
			if (array[smallest_idx] > array[cur_idx])
			{
				smallest_idx = cur_idx;
			}
		}

		// swap
		{
			int tmp = array[smallest_idx];
			array[smallest_idx] = array[start_idx];
			array[start_idx] = tmp;
		}

		print_array(array, length);
	}


	return (0);
}