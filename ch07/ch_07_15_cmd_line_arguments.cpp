// ch_07_15_cmd_line_arguments.cpp

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	for (int cnt = 0; cnt < argc; cnt++)
	{
		std::string argv_single = argv[cnt];

		if 	(cnt == 1)
		{
			int input_number = std::stoi(argv_single);
			cout << "input_number : " << input_number + 1 << endl;
		}
		else
			cout << argv_single << endl;
	}
	return (0);
}